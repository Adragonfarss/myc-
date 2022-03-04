#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    cout << "Welcome to dice random guessing game\n\n\n";

    char input;
    srand(time(NULL));

    int guess = 0;
    int ans = 0;
    int score = 0;
    int rounds = 0;

    cout << "Do you wanna play... (y/n): ";
    cin >> input;

    while (input == 'y' || input == 'Y')
    {
        for (rounds; rounds < 15; rounds++)
        {
            cout << "Guess a number from 1 to 6: ";
            cin >> guess;

            cout << "\n";

            ans = rand() % 6 + 1;
            if (ans == guess)
            {
                score++;
                cout << "Good guess!, the dice rolled " << ans << endl;
                cout << "\n";
            }

            else
            {
                cout << "Try again!, the dice rolled " << ans << endl;
                cout << "\n";
            }

            if (score == 6)
            {
                cout << "You won!";
                cout << "\n";
                break;
            }
        }
        break;
    }

    while (input == 'n' || input == 'N')
    {
        cout << "Good day..." << endl;
        break;
    }

    cout << "\n";
    cout << "your score is " << score << endl;

    

    return 0;
}