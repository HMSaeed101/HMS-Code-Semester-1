// Even Odd Ticket Number
// saeed 25-CS-05
#include <iostream>
using namespace std;
int main ()
{
     int a;
     cout << "Enter your Ticket Number : ";
     cin >> a;

     if (a % 2 == 0)     {cout << "The Ticket Number is even.";}
     else                {cout << "The Ticket Number is ODD.";}

     return 0;
}