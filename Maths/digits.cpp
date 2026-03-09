// How to extract digits from a Num

// % 10 gives you the last digit of num as Remaider
// divide by 10 removes the last digit from the num
// divide by 100 removes the last two digit from the num

#include <iostream>
using namespace std;
int main()
{
     int num;
     cout << "\n Enter any Number : ";
     cin >> num;
     int temp;

     // Finding Last Digit (Remainder when num divided by 10)
     temp = num;
     int last_digit = temp % 10;
     cout << "\n Last Digit = " << last_digit;
     cout << "\n ________________________________";

     // Finding Last Two Digit (Remainder when num divided by 100)
     temp = num;
     int last_two_digits = temp % 100;
     cout << "\n Last Two Digits = " << last_two_digits;
     cout << "\n ________________________________";

     // Finding Second Last Digit (First Remove Last Digit, then find last digit from remaining num)
     temp = num;
     temp = temp / 10;                                 // Removing the Last digit
     int sec_last_digit = temp % 10;                   // Finding the last digit
     cout << "\n Second Last Digit = " << sec_last_digit ;
     cout << "\n _________________________________";

     // Finding Third Last Digit (First Remove Last two Digits, then find last digit from remaining num)
     temp = num;
     temp = temp / 10;                                 // Removing the Last digit
     temp = temp / 10;                                 // Removing the Sec Last digit
     int third_last_digit = temp % 10;                 // Finding the last digit
     cout << "\n Third Last Digit = " << third_last_digit ;
     cout << "\n ___________________________________";
     
     return 0;
}