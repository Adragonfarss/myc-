#include <iostream>
#include <string>

using namespace std;

void Question1()
{
    cout << "When you're dead, you want people to remember you as... \n";
    cout << "1) The Good\n2) The Great\n3) The Wise\n4) The Bold\n\n";
    cout << "Enter your answer: ";
}

void Question2()
{
    cout << "Dusk or Dawn?\n";
    cout << "1) Dusk\n2) Dawn\n\n";
    cout << "Enter your answer: ";
}

void Question3()
{
    cout << "Which kind of instruments pleases your ears?\n";
    cout << "1) Violin\n2) Trumpet\n3) Piano\n4) Drum\n\n";
    cout << "Enter your answer: ";
}

void Question4()
{
    cout << "Which road tempts you the most?\n";
    cout << "1) Wide, Sunny, Grassy lane.\n";
    cout << "2) Narrow, Drak, Lantern_lit alley.\n";
    cout << "3) The twisting, leaf-strewn path through woods\n";
    cout << "4) The cobbled street lined (ancient buildings)\n\n";
    cout << "Enter your answer: ";
}

int main()
{
    int gryffindor = 0;
    int hufflepuff = 0;
    int slytherin = 0;
    int ravenclaw = 0;
    int answer1, answer2, answer3, answer4;

    Question1();
    cin >> answer1;

    if (answer1 == 1)
    {
        hufflepuff++;
    }
    else if (answer1 == 2)
    {
        slytherin++;
    }
    else if (answer1 == 3)
    {
        ravenclaw++;
    }
    else if (answer1 == 4)
    {
        gryffindor++;
    }
    else
    {
        cout << "Invalid!\n";
    }

    Question2();
    cin >> answer2;

    if (answer2 == 1)
    {
        hufflepuff++;
        slytherin++;
    }
    else if (answer2 == 2)
    {
        gryffindor++;
        ravenclaw++;
    }
    else
    {
        cout << "Invalid!\n";
    }

    Question3();
    cin >> answer3;

    if (answer3 == 1)
    {
        slytherin++;
    }
    else if (answer3 == 2)
    {
        hufflepuff++;
    }
    else if (answer3 == 3)
    {
        ravenclaw++;
    }
    else if (answer4 == 4)
    {
        gryffindor++;
    }
    else
    {
        cout << "Invalid!\n";
    }

    Question4();
    cin >> answer4;

    if (answer4 == 1)
    {
        hufflepuff++;
    }
    else if (answer4 == 2)
    {
        slytherin++;
    }
    else if (answer4 == 3)
    {
        gryffindor++;
    }
    else if (answer4 == 4)
    {
        ravenclaw++;
    }
    else
    {
        cout << "Invalid!\n";
    }

    int Max = 0;
    string house;

    if (gryffindor > Max)
    {
        house = "gryffindor";
    }

    if (ravenclaw > Max)
    {
        house = "ravenclaw";
    }

    if (hufflepuff > Max)
    {
        house = "hufflepuff";
    }

    if (slytherin > Max)
    {
        house = "slytherin";
    }

    cout << "Congrates you have been sorted in " << house << endl;

    return 0;
}