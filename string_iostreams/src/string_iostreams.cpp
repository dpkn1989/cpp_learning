#include <iostream>
#include <string>
#include <sstream>
#include "string_iostreams/string_iostreams.h"

using namespace std;

void input_string_display(void)
{
    string name;
    cout << "Enter a name: ";
	getline(cin,name);
	cout << "Hello " << name << endl;
	cout << "Length of name is: " << name.length() << endl;
	cout << "Kota is at: " << name.find("Kota") << "th location" << endl;
}

void string_iterator(void)
{
    string god = "Sri Rama Chandra! Jagannatha! Panduranga!";
    
	string::iterator itr = god.begin();
	while(itr != god.end())
	{
       cout << *itr;
	   ++itr;
	}
	cout << endl;
}

void print_istream(void)
{
    string str = "John:10,Bheem:20,Myra:30,Anil:40,Rudra:50";
    istringstream source(str);
    
    string i;

    while(getline(source,i,','))
    {
        istringstream dest(i);
        string j;
        while(getline(dest,j,':'))
        {
           cout << j << endl;
        }
    }    

}

void print_ostream(void)
{
    string name{"Rama"},wife{"Sita Devi"};
    ostringstream couple;

    couple << name << " : " << wife;
    
    string final = couple.str();

    cout << final << endl; 
}