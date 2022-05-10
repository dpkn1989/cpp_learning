#include <iostream>
#include "first_class/first_class.h"

using namespace std;

void Car::acceleration(void)
{
    speed += 10;
}

void Car::apply_brake(void)
{
    if(speed >= 5)
    {
        speed -= 5;
    }
    else{
        speed = 0;
    }
}

int Car::get_speed(void) const
{
    speed++;
    return speed;
}

string Car::get_color(void) const
{
    return color;
}

