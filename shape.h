#include <iostream>

using namespace std;

#ifndef SHAPE_H
#define SHAPE_H

class Shape
{
private:

string color;
 
 public:
 Shape(string c):color(c)
 {

 }
 Shape()
 {
     
 }

 virtual void set_dimentions()
 {

 }

virtual int get_area()
{
    cout << "Parent Class Area: " << endl;
    return 0;
}
virtual string draw(string c) = 0;
};
#endif //SHAPE_H