// Leap Year Checking 
// Assignments

#include <iostream>
using namespace std;
int main ()
{
     int year;
     cout << "Enter the Year : ";
     cin >> year;

     string lp = "This is a Leap Year.";
     string lpnot = "This is NOT a Leap Year.";

     if (year % 4 == 0){
          
          if(year % 100 == 0)
          {
               
               if (year % 400 == 0){cout << lp << "(Century Year)";}
               else{cout << lpnot << "(Century Year)";}}
          
          else{cout << lp;}
     }

     else{cout << lpnot;}

     return 0;
}

