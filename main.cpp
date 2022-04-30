#include <iostream>
#include "my_math.h"

using namespace std;

int main(void)
{
	int i;
	cout << "Sri Rama Chandra! Jagannatha! Panduranga!" << endl;
    cout << "Enter a number: ";
	cin >> i;
	cout << "Address of " << i << " is: " << &i << endl;

	print_factorial(i);

	return 0;
}