#include <iostream>
#include <string>

using namespace std;

class Employee{
    protected:
        string m_name;
        int m_age;
        double m_basic;

    public:
        Employee(string name, int age, double basic):m_name(name),
                                                     m_age(age),
                                                     m_basic(basic){
            
        }

        virtual double calculate_salary()
        {
            double salary = m_basic + (m_basic * 0.1);
            return salary;
        }

        virtual void display_employee() = 0;
};

class Manager: public Employee{
    private:
        double m_hra;
    public:
        Manager(string name,int age,double basic):Employee(name,age,basic){
            m_hra = m_basic * 0.15;
        }

        double calculate_salary()
        {
            double salary = Employee::calculate_salary() + m_hra;
            return salary;
        }

        void display_employee()
        {
            cout << "Employee name is: " << m_name << endl;
            cout << "Employee age is: " << m_age << endl;
            cout << "Employee hra is: " << m_hra << endl;
        }

};