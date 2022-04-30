#include <iostream>
#include "array_pointer/array_pointer.h"

using namespace std;

void create_array(void)
{
	int a, array[5]={11,12,13,14,15};

	cout << "Enter a number between 1-10" << endl;
	cin >> a;

	int arr[a] = {0};

	for(int i=0; i < a; i++)
	{
		arr[i] = i;
	} 

	print_array(arr,a);
	print_array(array);
}

/*************************************** Compile time polymorphism - START ***************************************/

/* To pass an array as a pointer then we need to send size of the array as a separate argument */
void print_array(int* ptr,int size)
{
	cout << "Pointer print_array() called" << endl;
	cout << "The array arr[" << size << "] = {";

	for(int j=0; j<size-1; j++)
	{
		cout << ptr[j] << ", ";
	}
	cout << ptr[size-1] << "}" << endl;

}

/* To pass an array as a reference then we need to mention the size of the array during function call but not as a separate argument*/
void print_array(int(&arr)[5])
{
    cout << "Reference print_array() called" << endl;
	cout << "The array arr[5] = {";

	for(int j=0; j<4; j++)
	{
		cout << arr[j] << ", ";
	}
	cout << arr[4] << "}" << endl;

}

/*************************************** Compile time polymorphism - END *****************************************/