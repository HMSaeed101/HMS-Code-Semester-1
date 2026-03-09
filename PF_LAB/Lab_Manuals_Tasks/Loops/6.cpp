// Lab Report 7 & 8 
// Palindrome Sequence
#include <iostream>
using namespace std;
int main()
{
     int num, og, rem, rev = 0;
     cout << "Enter a number: ";
     cin >> num;
     og = num;
     do 
     {
        rem = num % 10;       // last digit
        rev = rev * 10 + rem;
        num = num / 10;       // remove last digit
     } 
     while (num != 0);
     if (rev == og)
        cout << og << " is a palindrome." << endl;
     else
        {cout << og << " is not a palindrome." << endl;}
    return 0;
}