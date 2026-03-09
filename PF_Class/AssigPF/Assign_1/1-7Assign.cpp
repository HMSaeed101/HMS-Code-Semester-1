// Electricity Bill Calculator 
// Assignments

#include <iostream>
using namespace std;
int main()
{
     int rate;
     int unit_cons;
     cout << "Enter the Number of Unit Consumed : ";
     cin >> unit_cons;

     if   (unit_cons > 200)                       {rate = 10;}
     else if (unit_cons>100 && unit_cons<=200)    {rate = 7;}
     else if (unit_cons<=100)                     {rate = 5;}
     else                                         {cout << "ERROR";}

     float bill = rate * unit_cons;
     cout << "Your Total Bill : " << bill ;

}