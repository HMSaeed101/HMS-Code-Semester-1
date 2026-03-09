// Checking Sides of A Triangle (With Using Logic Operators)

#include <iostream>
using namespace std;
int main()
{
     int a, b, c ;
     cout << "Enter the lengths of all Three Sides of a Triangle : ";
     cin >> a >> b >> c;

     if (a+b>c && b+c>a && c+a>b)   
     {
          cout << "A valid Triangle !!!";

          if (a==b && b==c && c==a)          {cout << "\n Equilateral Triangle";}
          else if (a==b || b==c || c==a)     {cout << "\n Isosceles Triangle";}
          else                               {cout << "\n Scalene Triangle";}

          if (a*a+b*b==c*c || b*b+c*c==a*a || a*a+c*c==b*b)
               {cout << "\n Right Angeled Triangle";}
     }
     
     else {cout << "Not a Valid Triangle";}

     return 0;
}