#include <iostream>
using namespace std;
int main()
{
     int a, b, c;
     cout << "Enter the first number : ";
     cin >> a;
     cout << "Enter the first number : ";
     cin >> b;
     cout << "Enter the first number : ";
     cin >> c;

     if (a==b)
     {    if (b==c)
          {cout << "All are equal.\n";}}
     else {cout << "They are not equal.\n";}

     cout << "The greatest is : ";

     if (a>b)
          {if(b>c){cout << a;}}

     if (b>c)
          {if (c>a){cout << b;}}

     if (c>a)
          {if (a>b){cout << c;}}
          
     return 0;
}