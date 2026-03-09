// Write a program that inputs a number in main() and passes it to a function. The function checks and displays whether the number is: Prime, Even & Odd. The output must cover all cases,
// e.g. “2” is a prime even number.

#include <iostream>
using namespace std;
void check(int a);
int main ()
{
    int num;
    cout << "Enter any Number to check if it is Prime, Even & Odd Number :  ";
    cin >> num;

    check(num);
}

void check(int a)
{
    // Check Prime
    bool is_prime = true;
    for(int i=2; i<a; i++)
    {
        if(a%i==0)
        {
            cout << "Not a Prime _ ";
            is_prime = false;
            break;
        }
    }
    if(is_prime==true)
    {
        cout << "Prime ";
    }

    // Check Even / Odd
    if(a%2==0)
        {cout << "Even Number";}
    else
        {cout << "Odd Number";}
}