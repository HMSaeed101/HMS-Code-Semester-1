// Machine Working
// saeed 25-CS-05
#include <iostream>
using namespace std;
int main ()
{
     int a;
     int b;

     cout << "Enter Speed of First machine : ";
     cin >> a;
     cout << "Enter Speed of First machine : ";
     cin >> b;

     if (a % 2 == 0)     
          {if ( b % 2 == 0)
               {cout << "Machines are running smoothly.";}}

     else {cout << "One or Both needs maintainance";}

     return 0;
}