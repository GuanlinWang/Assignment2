#include "person.h"
#include <iomanip>
Person::Person()
{

}
string Person::getFirstName()
{
    return firstName;
}
string Person::getLastName()
{
    return lastName;
}
float Person::getPayRate()
{

    return payRate;
}
float Person:: getHoursWorked()
{
    return hoursWorked;
}
void Person:: setFirstName(string fName)
{
    firstName=fName;
}
void Person:: setLastName(string lName)
{
    lastName=lName;
}

void Person:: setPayRate(float rate)
{
    payRate=rate;
}
void Person:: setHoursWorked(float hours)
{
    hoursWorked=hours;
}

string Person:: fullName()
{
    string fullName=lastName+" "+firstName;
    return fullName;
}
float Person:: totalPay()
{

    float total=payRate*hoursWorked;
    return total;
}
