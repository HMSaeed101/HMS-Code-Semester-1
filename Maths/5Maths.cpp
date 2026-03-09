// Checking if A Num Is Prime

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter any number : ";
    cin >> num;

    int i, j;
    bool isPrime = true;   // to track primality

    for (i = 2; i < num; i++)      // test all divisors less than num
    {
          if (num % i == 0)
            {  cout << "Not a Prime Number.\n";
               isPrime = false;
          break;}       // ensures inner loop doesn't become infinite 
        
          if (!isPrime)
          break;       // break outer loop too when divisor found
    }

    if (isPrime)
        cout << "Prime Number.\n";

    cout << "________________________________";
    return 0;
}
