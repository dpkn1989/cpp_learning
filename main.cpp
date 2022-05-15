#include <iostream>
#include <string>
#include "my_math/my_math.h"
#include "array_pointer/array_pointer.h"
#include "string_iostreams/string_iostreams.h"
#include "file_stream/file_stream.h"
#include "vectors_strcutures/vectors_structures.h"
#include "first_class/first_class.h"
#include "operator_overloading/operator_overloading.h"
#include "template_example/template_example.h"
#include "inheritance/inheritance.h"

using namespace std;

//void display_car(const Car&);

int main(void)
{
	string_iterator();

	Employee* ptr = new Manager("Ganesh",33,5000);      //If calculate_salary is not defined or declared virtual then the function from Employee will
	cout << "Salary of m1 is: " << ptr->calculate_salary() << endl;   //be called even if Manager is declared in heap
	ptr->display_employee();
	cout << endl;

	Manager e1("Mahesh",32,4800);
	cout << "Salary of e1 is: " << e1.calculate_salary() << endl;
	e1.display_employee();

	delete ptr;
 
    /*Template_test<int> Temp1(5,9);
	Template_test<string> Temp2("Sita ","Ram!");

	cout << "Temp1 result is: " << Temp1.Get_Sum() << endl;
	cout << "Temp2 result is: " << Temp2.Get_Sum() << endl;
	
	Car BMW("BMW","White",250);
	Car Audi(BMW);                      //Here, compiler creates its own copy constructor
	display_car(Audi);

	Car Benz = BMW;                     //Copy constructor is called in this case too, but we cannot have chain of assisgnment operators while creating an object
	display_car(Benz);                  //For example, Car Benz = BMW = Audi is not allowed during object creation

	Car VW;
	VW = Audi;                          //Assignment operator is called here
	display_car(VW);

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
    
	Car BMW,Audi("Black",125);

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
	cout << "Car is : " << c1.get_name() << endl;
	cout << c1.get_name() << " color is: " << c1.get_color() << endl;
	cout << c1.get_name() << " speed is: " << c1.get_speed() << endl;
	cout << "=================================" << endl << endl;
}*/