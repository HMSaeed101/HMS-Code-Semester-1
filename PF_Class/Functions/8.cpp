// A 5-digit positive integer is entered through the keyboard,
// write a function to calculate sum of digits of the 5-digit number
// (1) Without using recursion
// (2) Using recursion
#include <iostream>
using namespace std;
int digit_sum(int a);
int digit_sum_rcr(int a);
int main()
{
    int num ;
    cout << "Enter five Digits : ";
    cin >> num ;

    int sum = digit_sum(num);
    cout << "Non-recursion version : " << sum << endl;

    int sum_rcr =  digit_sum_rcr(num);
    cout << "Recursion version : " << sum_rcr ;
}

int digit_sum(int a)
{
    int sum=0, rem;
    while (a!=0)
    {
        rem = a % 10;       // Check Last digit of num
        sum = sum + rem;
        a /= 10;            // Remove the last digit
    }
    return sum;
}

// Recursion Version
int digit_sum_rcr(int a)
{
    if(a == 0)          // base case
        return 0;

    int rem = a % 10;                   // take the last digit
    int sum = digit_sum_rcr(a / 10);
    int total_sum = rem + sum;          // combine last digit + sum of rest

    return total_sum;
}