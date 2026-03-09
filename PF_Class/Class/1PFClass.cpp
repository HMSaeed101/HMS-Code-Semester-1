// Calculating Value of Z based on given formula

#include<iostream>
using namespace std;
int main()
{ 
    //Step 01 Declaring variables
    int a, b, c, x, z ;

    //Step 02 Assigning values
    x = 90;
    a = 100;
    b = 200;
    c = 150;

    //Step 03 Calculating x
    z= (x/9) + 7*(a+b)/(c-x);

    //Step 04 Printing x
    cout << "Value of Z = " << z ;

    return 0;
}