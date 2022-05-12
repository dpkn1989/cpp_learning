#include <iostream>
#include <string>
#include "my_math/my_math.h"
#include "array_pointer/array_pointer.h"
#include "string_iostreams/string_iostreams.h"
#include "file_stream/file_stream.h"
#include "vectors_strcutures/vectors_structures.h"
#include "first_class/first_class.h"
#include "operator_overloading/operator_overloading.h"

using namespace std;

//void display_car(const Car&);

int main(void)
{
	string_iterator();
	Circle c1,c2(5),c3,c5(12);
	c3 = c1+c2;
	cout << c3;
	Circle c4 = ++c1;
	cout << c4;
	c3 = c2++;
	cout << c3;
	cout << c5;
	cin >> c5;
	cout << c5;
	if(c4 > c5)
	{
		cout << "c4 is bigger" << endl; 	
	}
	else
	{
		cout << "c5 is bigger" << endl;
	}
    
	/*Car BMW,Audi("Black",125);

    BMW.acceleration();
    BMW.apply_brake();
    display_car(BMW);

    Audi.acceleration();
    Audi.apply_brake();
    display_car(Audi);

	basic_vector();
	basic_structure();
	write_to_file();
    read_from_file();
	input_string_display();
	print_istream();
	print_ostream();
	print_factorial();
    create_array();*/

	return 0;
}

/*void display_car(const Car& c1)
{
	cout << "Car color is: " << c1.get_color() << endl;
	cout << "Car speed is: " << c1.get_speed() << endl;
}*/