// ----------------------------------------------------
// quadEqu.cpp
// Defines and calls the function quadEquation(),
// which computes the solutions of quadratic equations a*x*x + b*x + c = 0
// Equation and its solutions are printed by the function printQuadEquation()
// ----------------------------------------------------
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

bool quadEquation( double a, double b, double c, double* x1Ptr, double* x2Ptr);
void printQuadEquation( double a, double b, double c);

string header = " *** Solutions of Quadratic Equations ***\n";
string line( 50, '-');

int main()
{
    cout << header << endl;
    printQuadEquation( 2.0, -2.0, -1.5);
    printQuadEquation( 1.0, -6.0, 9.0);
    printQuadEquation( 2.0, 0.0, 2.0);
    return 0;
}
void printQuadEquation( double a, double b, double c)
{
    double x1 = 0.0;
    double x2 = 0.0;
    cout << line << '\n'
    << "\nThe quadratic equation:\n\t "
    << a << "*x*x + " << b << "*x + " << c << " = 0"
    << endl;
    if( quadEquation( a, b, c, &x1, &x2) == True)
    {
        cout << " has real solutions:"
        << "\n\t x1 = " << x1
        << "\n\t x2 = " << x2 << endl;
    }
    else
    {
        cout << "has no real solutions!" << endl;
    }
    cout << "\nGo on by pressing any key. \n\n";
    cin.get();
}

bool quadEquation( double a, double b, double c, double* x1Ptr, double* x2Ptr)
{
    bool flag = false;
    double det = b*b - 4*a*c;
    if( det >= 0) // There are real solutions
    {
        det = sqrt( det);
        *x1Ptr = (-b + det) / (2*a);
        *x2Ptr = (-b - det) / (2*a);
        flag = true;
    }
    return flag;
}