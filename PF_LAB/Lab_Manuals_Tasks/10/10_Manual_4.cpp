// A weather station stores temperatures of 7 days in an array. A day is considered abnormal if temperature is:
// Below 10°C or Above 40°C
// count and display the Total abnormal days and List of days (indices) that are abnormal
// Saeed 25-CS-05
// Lab 10 (4)
#include <iostream>
using namespace std;
int main()
{
     int temp[7];
     for(int i=0; i<7; i++)
     {
          cout << "Enter temperature of " << i+1 << " DAY : ";
          cin >> temp[i];
     }
     int count = 0;
     for(int i=0; i<7; i++)
     {
          if(temp[i]<10 || temp[i]>40 )
          {
               count++;
          }
     }
     cout << "\nTotal number of Abnormal Days are : " << count << endl;
     cout << "";
}