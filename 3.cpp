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

class TeamLeader:public ProductionWorker
{
private:
    double monthlyBonus;
    int requiredTrainingHours;
    int trainingHoursAttend;
    
public:
    TeamLeader(double mBonus, int reqTrainingHrs, int trainingHrsAttend)
    {
        this->monthlyBonus = mBonus;
        this->requiredTrainingHours = reqTrainingHrs;
        this->trainingHoursAttend = trainingHrsAttend;
    }
    double getMonthlyBonus()
    {
        return monthlyBonus;
    }
    int getRequiredTrainingHours()
    {
        return requiredTrainingHours;
    }
    int getTrainingHoursAttend()
    {
        return trainingHoursAttend;
    }
    void setMonthlyBonus(double bonuss)
    {
        bonuss = monthlyBonus;
    }
    void setRequiredTraining(int trainingg)
    {
        trainingg = requiredTrainingHours;
    }
    void setTrainingHours (int trainingHours)
    {
        trainingHours = trainingHoursAttend;
    }
};

int main()
{
    string name;
    int numberID, datee, shift, trainingRequired, trainingHours;
    double paymentHours, monthBonus;
    
    cout << "Name: ";
    cin >> name;
    cout << "Number: ";
    cin >> numberID;
    cout << "Hired Date: ";
    cin >> datee;
    cout << "Shift: ";
    cin >> shift;
    cout << "Hourly payment: ";
    cin >> paymentHours;
    cout << "Training Hours attended: ";
    cin >> trainingHours;
    cout << "Monthly bonus: ";
    cin >> monthBonus;
    
    TeamLeader leader;
    leader.setName(name);
    leader.setNum(numberID);
    leader.setDate(datee);
    leader.setShift(shift);
    leader.setPay(paymentHours);
    
    cout << "Leader's name: ";
    cin >> leader.getName();
    cout << "Number: ";
    cin >> leader.getNum();
    cout << "Date hired: ";
    cin >> leader.getDate();
    cout << "Shift: ";
    cin >> leader.getShift();
    cout << "Hourly payment: ";
    cin >> leader.getPay();
    cout << "Monthly bonus: ";
    cin >> leader.getMonthlyBonus();
    cout << "Required training: ";
    cin >> leader.getRequiredTrainingHours();
    cout << "Training attended: ";
    cin >> leader.getTrainingHoursAttend();
}
