#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double salary;
    float allowances, deductions;
    double netSalary;

    cout<<"What is the salary?";
    cin>>salary;

    cout<<"What is the total alliances?";
    cin>>allowances;
    allowances/=100;

    cout<<"What is the total deductions?";
    cin>>deductions;
    deductions/=100;

    netSalary = salary + salary * allowances - salary * deductions;

    cout << "Net Salary is " << netSalary << endl;

    return 0;
}