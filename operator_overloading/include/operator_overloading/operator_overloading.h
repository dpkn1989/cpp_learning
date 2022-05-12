#include <iostream>

using namespace std;

class Circle
{
    private:
        int radius;
    public:
        Circle(void);
        Circle(int radius);
        Circle operator+(Circle& c);
        Circle operator++(void);
        Circle operator++(int);
        int get_radius(void);
        bool operator>(Circle&);

        friend istream& operator>>(istream&,Circle&);
};

ostream& operator<<(ostream&,Circle&);