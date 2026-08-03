#include <iostream>
#include <string>
using namespace std;
class Empdata
{
    int emp_id;
    string emp_name;
    string emp_dept;
    float emp_salary;

public:
    void getEmp_Details()
    {
        cout << "Enter the Employee id" << endl;
        cin >> emp_id;
        cout << "Enter Employee Name" << endl;
        cin >> emp_name;
        cout << "Enter Employee Department" << endl;
        cin >> emp_dept;
        cout << "Enter Employee's Salary" << endl;
        cin >> emp_salary;
    }
    float annualSalary()
    {
        return emp_salary * 12;
    }
    void displayResult()
    {
        cout << "\nEmployee id is :" << emp_id << endl;
        cout << "Employee name is :" << emp_name << endl;
        cout << "Employee Department is :" << emp_dept << endl;
        cout << "Employee's Salary is : " << endl;
        cout << "Employee's Annual Salary is :" << annualSalary() << endl;
    }
};
int main()
{
    Empdata e1;
    e1.getEmp_Details();
    e1.displayResult();
    return 0;
}