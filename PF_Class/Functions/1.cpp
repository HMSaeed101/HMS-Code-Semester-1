// Factorial by Function Recursion
#include <iostream>
using namespace std;

int fact(int a)
{
     // Base condition
     if (a == 1)
         return 1;

     // Recursive case
     return a * fact(a - 1);
}

int main()
{
    int num, ans;
    cout << "Enter a number: ";
    cin >> num;

    ans = fact(num);
    cout << "Factorial: " << ans;

    return 0;
}
