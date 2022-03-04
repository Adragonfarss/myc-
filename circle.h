#include <iostream>
#include "shape.h"

using namespace std;

#ifndef CIRCLE_H
#define CIRCLE_H

class Circle : public Shape
{
private:

int radius;
 
 public:
 Circle(int r, string c):Shape(c)
 {
    radius = r;
 }
 Circle()
 {

 }

 void set_dimentions(int r)
 {
     
 }

 int get_area()
{
    cout << "Circle Area: " << 3.14 * (radius * radius) << endl;
    return 3.14 * (radius * radius);
}
 string draw(string c)
{
    cout << "Draw Circle Shape in: " << c << " Color." << endl;
    return c;
}
};
#endif //CIRCLE_H