#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    string employeeName;
    int employeeNumber;
    string hireDate;
public:
    Employee(string name, int number, string date)
    {
        employeeName = name;
        employeeNumber = number;
        hireDate = date;
    }
    void setName(string newName)
    {
        employeeName = newName;
    }
    void setNum(int newNum)
    {
        employeeNumber = newNum;
    }
    void setDate(string newDate)
    {
        hireDate = newDate;
    }
    string getName()
    {
        return employeeName;
    }
    int getNum()
    {
        return employeeNumber;
    }
    string getDate()
    {
        return hireDate;
    }
    void print();
};

class ShiftSupervisor:public Employee
{
protected:
    double annualSalary;
    double annualProductionBonus;
public:
   ShiftSupervisor(string empName, int empNum, string hDate, int empSalary, int empBonus) : Employee("Name", 123456, "12-10-2016")
    {
        annualSalary = empSalary;
        annualProductionBonus = empBonus;
    }
    void setSalary(int eSalary)
    {
        annualSalary = eSalary;
    }
    void setBonus(int eBonus)
    {
        annualProductionBonus = eBonus;
    }
    int getSalary()
    {
        return annualSalary;
    }
    int getBonus()
    {
        return annualProductionBonus;
    }
};

int main()
{
    do
    {
        string supervisorName;
        int supervisorID;
        int supervisorHireDate;
        int productsSold;
        double supAnnualSalary;
        double supAnnualBonus;
        
        cout << "Name of supervisor: ";
        cin >> supervisorName;
        cout << "Supervisor's ID number: ";
        cin >> supervisorID;
        cout << "Supervisor's hired date: ";
        cin >> supervisorHireDate;
        cout << "Annual Salary: ";
        cin >> supAnnualSalary;
        cout << "Amount of products sold: ";
        cin >> productsSold;
        
        ShiftSupervisor supervisor1;
        supervisor1.setEmployeeName(supervisorName);
        supervisor1.setEmployeeNumber(supervisorID);
        supervisor1.setDate(supervisorHireDate);
        supervisor1.setSalary(supAnnualSalary);
        supervisor1.setBonus(supAnnualBonus);
        
        cout << "Employee name: " << supervisor1.getEmployeeName() << endl;
        cout << "Employee number: " << supervisor1.getNum() << endl;
        cout << "Hire date: " << supervisor1.getDate() << endl;
        cout << "Salary: $" << supervisor1.getSalary() << endl;
        cout << "Bonus: $" << supervisor1.getBonus() << endl;
        cout << "Total earnings: $" << supervisor1.getSalary() + supervisor1.getBonus() << endl;
    }
}
