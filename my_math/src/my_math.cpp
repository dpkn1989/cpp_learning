#include <iostream>
#include "my_math/my_math.h"

using namespace std;

void print_factorial(int& a)
{
    int k = 1;
	cout << "Address of " << a << " is: " << &a << endl;

    if(a == 0)
	{
		cout << "Factorial of zero is " << k << endl;
	}
	else if(a < 0)
	{
		cout << "Factorial of a negative number is invalid" << endl;
	}
	else{
        for(int j = 1; j <= a; j++)
	    {  
		    k *= j; 
	    }
		cout << "Factorial of " << a << " is: " << k << endl;
	}
}