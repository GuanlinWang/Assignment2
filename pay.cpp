#include "person.cpp"
#include <iostream>
#include <fstream>
#include <vector>

void writeData(vector<Person> output);
void readData(vector<Person> &input);
int main()
{
  vector <Person> employee;
  readData(employee);
  writeData(employee);
  return 0;
}

void readData(vector<Person> &input)
{
  string first,last;
  float hours, rate;
  ifstream file;
   file.open("input.txt");
    while(true)
   {
     file>>last>>first>>rate>>hours;
     if(file.peek(),file.eof())
    {break;}
     input.emplace_back(first,last,rate,hours);
   }
   file.close();
}

void writeData(vector<Person> output)
{
  fstream file;
  file.open("output.txt",fstream::out);
  for (int i=0;i<output.size();i++)
  {
    file<<output[i].fullName()<<" "<<output[i].totalPay()<<endl;
  }
  file.close();
}

