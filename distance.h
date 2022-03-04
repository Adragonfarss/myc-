#include <iostream>

using namespace std;

#ifndef DISTANCE_H
#define DISTANCE_H

class Distance
{
private:
    int feet;
    float inches;

public:
    Distance() : feet(0), inches(0.0)
    {
    }
    Distance(int f, float in) : feet(f), inches(in)
    {
    }

    void setdistance(int f, float in);
    void print();

    Distance add_distance(Distance d2);

    Distance operator+(Distance d2);
};

void Distance::setdistance(int f, float in)
{
    feet = f;
    inches = in;
}

void Distance::print()
{
    cout << "feets are " << feet << " and, inches are " << inches << endl;
}

Distance Distance::add_distance(Distance d2)
{
    Distance result;
    result.feet = feet + d2.feet;
    result.inches = inches + d2.inches;
    return result;
}

Distance Distance::operator+(Distance d2)
{
    int f = feet + d2.feet;
    float i = inches + d2.inches;

      while(i >= 12.0)
      { 
       if (i >= 12.0)
       {
           i -= 12.0;
           f++;
       }
      }
     return Distance(f, i);

}

#endif //DISTANCE_H