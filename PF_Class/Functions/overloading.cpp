// Same name, different action functions
#include <iostream>
using namespace std;
int sq_add(int a);
int sq_add(int a, int b);
int main()
{
     int num1, num2, square, add;
     cout << "Enter two numbers : " << endl;
     cin >> num1;
     cin >> num2;

     square = sq_add(num1);
     cout << "Square of First number : " << square << endl ;

     add = sq_add(num1, num2);
     cout << "Addition of Both : " << add << endl;
}

int sq_add(int a)
{
     return a * a;
}
int sq_add(int a, int b)
{
     return a + b;
}