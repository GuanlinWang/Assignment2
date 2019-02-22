#include "person.cpp"
#include <iostream>
#include <fstream>

void writeData(Person output[],int size);
void readData(Person input[],int &size);
int main()
{
  int size;
    Person employee[20];
    readData(employee,size);
    writeData(employee,size);
    return 0;
}

void readData(Person input[],int &size)
{
  int temp=0;
  string first,last;
  float hours, rate;
    ifstream file;
   file.open("input.txt");
   for (int i =0; i<20;i++)
   {
     file>>last>>first>>rate>>hours;
     if(file.peek(),file.eof())
    {break;}
     input[i].setFirstName(first);
     input[i].setLastName(last);
     input[i].setPayRate(rate);
     input[i].setHoursWorked(hours);
     temp++;

   }
   file.close();
   size=temp;
}

void writeData(Person output[], int size)
{
  fstream file;
  file.open("output.txt",fstream::out);
  for (int i=0;i<size;i++)
  {
    file<<output[i].fullName()<<" "<<output[i].totalPay()<<endl;
  }
  file.close();
}
