#include <string>

using namespace std;

class Car{
    private:
       string name;
       string color;
       mutable int speed;
    
    public:
       Car(){
           name = "Unknown";
           color = "White";
           speed = 100;
       }

       Car(string name, string color, int speed){
           this->name = name;
           this->color = color;
           this->speed = speed;
       }

       void acceleration(void);
       void apply_brake(void);
       string get_name(void) const;
       int get_speed(void) const;
       string get_color(void) const;

       ~Car(void);
};
