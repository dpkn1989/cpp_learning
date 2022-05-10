#include <iostream>
#include <vector>
#include <string>
#include "vectors_strcutures/vectors_structures.h"

using namespace std;

void basic_vector(void)
{
    vector <int> v1;
    v1.push_back(23);

    int arr[5] = {3,5,9,12,14};
    v1.push_back(arr[0]);
    v1.push_back(arr[3]);

    vector<int>::iterator it1 = v1.begin();
    cout << "v1 is ";
    while(it1!=v1.end())
    { 
        cout << *it1 << " ";
        it1++;
    }
    cout << endl;

    v1.pop_back();

    vector<int>::iterator it = v1.begin();
    cout << "Modified v1 is ";
    while(it!=v1.end())
    {
        cout << *it << " ";
        it++;
    }
    cout << endl;

    vector <int> v2(arr,arr+3);
    vector<int>::iterator it2 = v2.begin();
    cout << "v2 is ";
    while(it2!=v2.end())
    {
        cout << *it2 << " ";
        it2++;
    }
    cout << endl;

    vector <int> v3(v1);
    vector<int>::iterator it3 = v3.begin();
    cout << "v3 is ";
    while(it3!=v3.end())
    {
        cout << *it3 << " ";
        it3++;
    }
    cout << endl;

    vector <int> v4(v2.begin(),v2.end()-1);
    vector<int>::iterator it4 = v4.begin();
    cout << "v4 is ";
    while(it4!=v4.end())
    {
        cout << *it4 << " ";
        it4++;
    }
    cout << endl;
}

struct Employee{
    int empId;
    string name;
    double salary;
};

void basic_structure(void)
{
    vector <Employee> emp;
    Employee e1{1,"Ravi",255.6};
    Employee e2{2,"Bhaskar",243.4};
    Employee e3{3,"Surya",261.8};

    emp.push_back(e1);
    emp.push_back(e2);
    emp.push_back(e3);

    /*for(int i=0; i<emp.size(); i++)
    {
        Employee em = emp.at(i);
        cout << "Employee " << i+1 << " ID: " << em.empId << endl;
        cout << "Employee " << i+1 << " Name: " << em.name << endl;
        cout << "Employee " << i+1 << " Salary: " << em.salary << endl; 
        cout << endl;  
    }*/

    for(auto em:emp)
    {
        cout << "Employee ID: " << em.empId << endl;
        cout << "Employee Name: " << em.name << endl;
        cout << "Employee Salary: " << em.salary << endl; 
        cout << endl;  
    }
}