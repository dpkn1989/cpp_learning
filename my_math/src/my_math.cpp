#include <iostream>
#include "my_math/my_math.h"

using namespace std;

void print_factorial(void)
{
    int a, k = 1;
	cout << "Enter a number: ";
	cin >> a;

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

/*************************************** Compile time polymorphism - START ***************************************/

void print_sum(int a, int b)
{
    cout << "The sum of integers " << a << " and " << b << " is: " << a+b << endl;
}

void print_sum(double a, double b)
{
	cout << "The sum of doubles " << a << " and " << b << " is: " << a+b << endl;
}

/*************************************** Compile time polymorphism - END *****************************************/