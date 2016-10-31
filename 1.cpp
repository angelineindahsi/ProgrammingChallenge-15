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

class ProductionWorker:public Employee
{
private:
    int shift;
    double payRate;
public:
    ProductionWorker(int shiftt, double pay) : Employee ("a", 123456, "12-10-2016")
    {
        shiftt = shift;
        pay = payRate;
    }
    void setShift(int shift1)
    {
        shift1 = shift;
    }
    void setPay(double payy)
    {
        payy = payRate;
    }
    int getShift()
    {
        return shift;
    }
    double getPay()
    {
        return payRate;
    }
    void print();
};

void ProductionWorker::print()
{
    cout << "Name: " << getName() << endl;
    cout << "Employee number: " << getNum() << endl;
    cout << "Hire date: " << getDate() << endl;
    cout << "Shift: " << getShift() << endl;
    
    if(shift == 1)
    {
        cout << "Day Shift" << endl;
    } else
    {
        cout << "Night Shift" << endl;
        cout << "Pay Rate: $" << getPay() << endl;
    }
}

int main ()
{
    int shifftt;
    double paay;
    
    cout << "Enter 1 for day shift and 2 for night shift: " << endl;
    cin >> shifftt;
    cout << "Enter hourly pay: $";
    cin >> paay;
    cout << endl;
    
    ProductionWorker employee1(shifftt,paay);
    employee1.setName("a");
    employee1.setNum(123456);
    employee1.setDate("12-10-2016");
    employee1.print();
    
    return 0;
    
}
