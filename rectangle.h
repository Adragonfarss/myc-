#include <iostream>
#include "shape.h"

using namespace std;

#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle: public Shape
{
private:

int lenght;
int width;
 
 public:
 Rectangle(int l, int w, string c):Shape(c)
 {
     width = w;
     lenght = l;
 }
 Rectangle()
 {
     
 }

void set_dimentions(int l, int w)
 {
     
 }

 int get_area()
{
    cout << "Rectangle Area: " << (lenght * width) << endl;
    return (lenght * width);
}
 string draw(string c)
{
    cout << "Draw Rectangle Shape in: " << c << " Color." << endl;
    return c;
}
};
#endif //RECTANGLE_H