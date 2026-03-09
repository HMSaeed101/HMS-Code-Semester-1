#include <iostream>
using namespace std;

int sum(int a, int b) // sum is a function
     {    
          int c = a + b ; 
          return c;
     }

int diff(int a, int b)
     {
          int c = a - b;
          return c;
     }

int fact(int a)
     {
          int factorial = 1;
          for(int i=1; i<=a ; i++)
          {
               factorial = factorial * i ;
          }
          return factorial;
     }

int reverse(int a)
     {
          int rev = 0;
          for( ; a>0 ; )
          {
               int rem = a % 10 ;
               rev = rev * 10 + rem ;
               a = a / 10 ;
          }
          return rev;
     }

int main()
{
     int num1, num2;
     cout << "Enter any Number : " ;
     cin >> num1;
     cout << "Enter any Number : " ;
     cin >> num2;

     cout << "___________________________________\n";
     cout << "Sum is = " << sum(num1,num2) << endl;
     cout << "Difference is = " << diff(num1,num2) << endl;
     cout << "Factorial of Firts Number is = " << fact(num1) << endl;
     cout << "Reverse of First Number is = " << reverse(num1) << endl;
}

