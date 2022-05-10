#include <iostream>
#include <string>
#include "my_math/my_math.h"
#include "array_pointer/array_pointer.h"
#include "string_iostreams/string_iostreams.h"
#include "file_stream/file_stream.h"
#include "vectors_strcutures/vectors_structures.h"
#include "first_class/first_class.h"

using namespace std;

void display_car(const Car&);

int main(void)
{
	string_iterator();
	Car BMW,Audi("Black",125);

    BMW.acceleration();
    BMW.apply_brake();
    display_car(BMW);

    Audi.acceleration();
    Audi.apply_brake();
    display_car(Audi);

	/*basic_vector();
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

void display_car(const Car& c1)
{
	cout << "Car color is: " << c1.get_color() << endl;
	cout << "Car speed is: " << c1.get_speed() << endl;
}