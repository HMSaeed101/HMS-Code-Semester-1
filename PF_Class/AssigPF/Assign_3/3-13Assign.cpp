// a Recursive function to calculate the factorial of 5
#include <iostream>
using namespace std;
int factorial(int a);
int main()
{
    int num;
    cout << "Enter a Number to find its factorial :";
    cin >> num;

    int fact = factorial(num);
    cout << "Factorial of " << num << " is " << fact;
}

int result=1;
int factorial(int a)
{
    // Base Condition
    if(a==1)
    {return 1;}
    return a * factorial(a-1);
    
}