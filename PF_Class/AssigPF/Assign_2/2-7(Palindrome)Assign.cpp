// To check if a given number is a palindrome (reads the same forwards and backwards) using While Loop
#include <iostream>
using namespace std;
int main()
{
     int entry, rev=0, temp;
     cout << "Enter any Number :";
     cin >> entry;

     int num = entry;

     while( num!=0 )
     {
          temp = num % 10; //Last digit
          rev = rev * 10 + temp;
          num = num / 10;
     }
     if(rev==entry)
     {
          cout << "The Number is Palindrome.";
     }
     else
     {
          cout << "The Number is NOT a Palindrome.";
     }
}