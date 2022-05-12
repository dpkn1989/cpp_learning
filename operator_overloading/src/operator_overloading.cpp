#include "operator_overloading/operator_overloading.h"

Circle::Circle(void){
    this->radius = 9;
}

Circle::Circle(int radius){
    this->radius = radius;
}
        
Circle Circle::operator+(Circle& c)
{
    Circle result;
    result.radius = this->radius + c.radius;
    return result;
}
        
int Circle::get_radius(void)
{
    return radius;
}

Circle Circle::operator++(void)
{
    this->radius++;
    Circle result;
    result.radius = this->radius;
    return result;
}

Circle Circle::operator++(int)
{
    Circle result;
    result.radius = this->radius;
    this->radius++;
    return result;
}

ostream& operator<<(ostream& sout,Circle& c)
{
    sout << "The radius of Circle is : " << c.get_radius() << endl;
    return sout;
}

istream& operator>>(istream& sin,Circle& c)
{
    cout << "Enter Circle radius : ";
    sin >> c.radius;
    return sin;
}

bool Circle::operator>(Circle& c)
{
    return this->radius > c.radius;
}