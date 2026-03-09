// Checking Palindrome Numbers

#include <iostream>
using namespace std;
int main()
{
     int num;
     cout << "Enter any Number : ";
     cin >> num;

     // Reverse a Number
     int rev;
     int rem;
     while(num!=0)
     {
          rem = num / 10;
          rev = rev*10 + rem;        // add last digit
          num = num /10;        // remove last digit
     }
     cout << rev;
}