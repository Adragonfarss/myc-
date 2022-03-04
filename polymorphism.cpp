#include <iostream>
#include "circle.h"
#include "shape.h"
#include "rectangle.h"

using namespace std;

int main()
{
    Circle c1(8, "Blue");
    Rectangle rec(5, 9, "White");
    Shape *shap_ptr;
    shap_ptr = &c1;
    shap_ptr->get_area();
    shap_ptr->draw("Blue");
    shap_ptr = &rec;
    shap_ptr->get_area();
    shap_ptr->draw("White");
}