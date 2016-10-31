#include <iostream>
#include <string>
using namespace std;

class PersonData
{
private:
    string lastName;
    string firstName;
    string address;
    string city;
    string state;
    int zip;
    string phoneNo;
public:
    void setData(string last, string first, string add, string cty, string statee, int zipp, string phone)
    {
        this->lastName = last;
        this->firstName = first;
        this->address = add;
        this->city = cty;
        this->state = statee;
        this->zip = zipp;
        this->phoneNo = phone;
    }
    void setLast (string lastNamee)
    {
        lastName = lastNamee;
    }
    void setFirst (string firstNamee)
    {
        firstName = firstNamee;
    }
    void setAddress (string addr)
    {
        address = addr;
    }
    void setCity(string cityy)
    {
        city = cityy;
    }
    void setState(string statee)
    {
        statee = statee;
    }
    void setZip (int zippp)
    {
        zip = zippp;
    }
    void setPhone (string number)
    {
        phoneNo = number;
    }
    string getFirstName()
    {
        return firstName;
    }
    string getLastName()
    {
        return lastName;
    }
    string getAddress()
    {
        return address;
    }
    string getCity()
    {
        return city;
    }
    string getState()
    {
        return state;
    }
    int getZip()
    {
        return zip;
    }
    string getPhoneNo()
    {
        return phoneNo;
    }
};

class CustomerData:public PersonData
{
private:
    int customerNumber;
    bool mailingList;
public:
    void setCustomerNumber(int custNo)
    {
        customerNumber = custNo;
    }
    void setMailingList(bool mailList)
    {
        if(mailList == 1)
        {
            mailingList = true;
        } else
        {
            mailingList = false;
        }
    }
    int getCustomerNumber()
    {
        return customerNumber;
    }
    int getMailingList()
    {
        return mailingList;
    }
};

int main ()
{
    string lastName, firstName, address, city, zipCod, phoneNum, customerNo;
    int mailingListt;
    CustomerData cust;
    
    cout << "Last name: ";
    getline(cin, lastName);
    
    cout << "First name: ";
    getline(cin, firstName);
    
    cout << "Address: ";
    getline(cin, address);
    
    cout << "City: ";
    getline(cin, city);
    
    cout << "Zip Code: ";
    getline(cin, zipCod);
    
    cout << "Phone number: ";
    getline(cin, phoneNum);
    
    cout << "Customer number: ";
    getline(cin, customerNo);
    
    cout << "Do you want to be in the mailing list? 1.Yes 2.No" << endl;
    cin >> mailingListt;
    
    cust.setLast(lastName);
    cust.setFirst(firstName);
    cust.setAddress(address);
    cust.setCity(city);
    cust.setZip(zipCod);
    cust.setPhone(phoneNum);
    cust.setMailingList(mailingListt);
    
    cout << "Name: " << cust.getFirstName() << " " << cust.getLastName() << endl;
    cout << "Address: " << cust.getAddress() << endl;
    cout << "City: " << cust.getCity() << endl;
    cout << "State: " << cust.getState() << endl;
    cout << "Zip Code: " << cust.getZip() << endl;
    cout << "Phone number: " << cust.getPhoneNo() << endl;
    cout << "Customer number: " << cust.getCustomerNumber() << endl;
    
    if(cust.getMailingList())
    {
        cout << "You are in the mailing list." << endl;
    } else
    {
        cout << "You are not in the mailing list." << endl;
    }
    
    return 0;
}
