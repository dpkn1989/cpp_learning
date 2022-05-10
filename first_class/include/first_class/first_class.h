#include <string>

using namespace std;

class Car{
    private:
       string color;
       mutable int speed;
    
    public:
       Car(){
           color = "White";
           speed = 100;
       }

       Car(string color, int speed){
           this->color = color;
           this->speed = speed;
       }

       void acceleration(void);
       void apply_brake(void);
       int get_speed(void) const;
       string get_color(void) const;
};
