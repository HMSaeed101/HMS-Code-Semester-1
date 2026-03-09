// Take 7 numbers from the user, add them
// Check the nature of the addition number (Even or odd)
// Check which is greater among all seven entered numbers

#include <iostream>
using namespace std;
int main()
{
     int entry;
     int num = 0;
     int greater = 1;

     cout << "Enter Seven Numbers one by one.\n\n";
     
     for(int i=1; i<=7; i++)
     {
          // Adding Numbers Entered
          cout << "Enter Number : ";
          cin >> entry;
          num += entry; 

          // Greatest of numbers
          if (greater<entry)
               {greater=entry;}
     }

     cout << "Sum of All Numbers = " << num << endl;

     // checking Even or Odd
     if (num % 2 == 0)
     {cout << "Even" << endl;}
     else 
     {cout << "Odd" << endl;}

     cout << "Greatest = " << greater;
}