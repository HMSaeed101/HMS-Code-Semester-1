// Value of one number raised to the power of another

#include <iostream>
using namespace std;
int main()
{
     int num1, num2;
     cout << "Enter any Number : ";
     cin >> num1;
     cout << "Enter any Number Again : ";
     cin >> num2;

     int product=num1;
     int i = num2-1;
     for ( i ; i>0 ; i--)
     {
          product = product * num1;
     }
     cout<<"The Number "<<num1<<" raised to the power "<<num2<<" is "<<product;
     return 0;
}