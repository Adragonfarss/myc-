#include <iostream>
#include "distance.h"

using namespace std;

int main()
{
    cout << endl;
    Distance obj1(1, 16.5);
    Distance obj2(4, 13.5);

    Distance d3 = obj1 + obj2;
    Distance d4 = d3 + obj1;

    d3.print();
    d4.print();

    int _end = 5;
    cout << "Enter (5) to end the program ...." << endl;
    cin >> _end;
    while (_end != 5)
    {
        cout << "Enter (5) to end the program ...." << endl;
        cin >> _end;
    }
}