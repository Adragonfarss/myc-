#include <iostream>

using namespace std;

class CAR
{
private:
    string brand;
    string model;
    int year;
    static int counter;

public:
    CAR() : brand(" BMW "), model(" X6 "), year(2020)
    {
    }
    CAR(int t)
    {
        counter = t;
        counter++;
    }

    ~CAR()
    {
        counter--;
    }

    void setbrand(string x);
    void setmodel(string y);
    void setyear(int s);

    string getbrand();
    string getmodel();

    int getyear();
    int getcount();
};

int CAR::counter = 0;

int CAR::getcount()
{
    counter++;
    cout << counter;
    return counter;
}

void CAR::setbrand(string x)
{
    brand = x;
}
void CAR::setmodel(string y)
{
    model = y;
}
void CAR::setyear(int s)
{
    year = s;
}
string CAR::getbrand()
{
    cout << brand;
    return brand;
}
string CAR::getmodel()
{
    cout << model;
    return model;
}
int CAR::getyear()
{
    cout << year;
    return year;
}

int main()
{
    CAR x1;

    x1.getcount();
    cout << endl;
    CAR x2;
    x2.getcount();
    cout << endl;

    x1.getbrand();
    x2.getmodel();

    cout << endl;
}
