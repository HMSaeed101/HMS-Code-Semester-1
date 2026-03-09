// Number System Conversions ( Decimal To Octal )
// Classic collect-then-reverse problem.

#include <iostream>
using namespace std;
int main()
{
     int num ;
     cout << "Enter any Number : ";
     cin >> num;

     int rem;
     int octal = 0;
     int place = 1;
     while(num!=0)
     {
          rem = num % 8;
          octal = octal + rem * place;
          place = place * 10;
          num /= 10;

     }
     cout << "Octal Number : " << octal ;
}