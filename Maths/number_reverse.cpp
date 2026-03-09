// Reverse a Number

#include <iostream>
using namespace std;
int main()
{
     int num ;
     cout << "Enter any Number : " ;
     cin >> num ;

     int rev = 0 , rem;

     while ( num > 0 )
     {
          rem = num % 10;          // finding last digit
          rev = rev * 10 + rem;    // Adding Last Digit
          // (rev*10) Shifts last digit one place
          num = num / 10 ;             // Remove last digit 
     }
          
     cout << "Reversed Number is " << rev << endl;
}