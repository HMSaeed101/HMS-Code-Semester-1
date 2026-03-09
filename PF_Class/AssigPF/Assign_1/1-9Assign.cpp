// Quadratic Equation Roots
// Assignments

#include <iostream>
using namespace std;
int main()
{
     int a, b, c;
     cout << "Enter the coefficients of the Quadratic Equation (a,b,c) ? ";
     cin >> a >> b >> c;

     float det = b * b - 4 * ( a * c );

     cout << " \n Determinant is = " << det;
     
     if        (det == 0)       {cout << "\n One Real and Repeated Root";}
     else if   (det > 0 )       {cout << "\n Two Real Roots";}
     else                       {cout << "\n Complex Roots";}

     return 0; 
}