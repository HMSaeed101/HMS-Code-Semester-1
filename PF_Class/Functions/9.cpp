//  Write a recursive function to obtain the first 25 numbers of a Fibonacci sequence. In a Fibonacci sequence the sum of two successive terms gives the third term


// ##############################################################################################################################################################################################
#include <iostream>
using namespace std;

// Recursive function to print Fibonacci numbers
void fibo(int count, int a = 0, int b = 1) 
    {
        if (count == 0) // Base case
            {return;}

        cout << a << "   ";
        fibo(count - 1, b, a + b);  // Recursive call: next number
        // count __ just for user demand of how many numbers
        // a __ first fibo num __ becomes second argument
        // a+b __ second fibo num
    }

int main() 
{
    int count;
    cout << "How many Fibonacci Numbers to Print : ";
    cin >> count;

    cout << "First " << count << " Fibonacci numbers:\n";
    fibo(count);
    return 0;
}


// ##############################################################################################################################################################################################
#include <iostream>
using namespace std;

int fib(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fib(n-1) + fib(n-2);
}

int main() {
    int n = 25;
    cout << "Simple recursive Fibonacci: ";
    for (int i = 0; i < n; i++)
        cout << fib(i) << " ";
    cout << endl;
}

/*__________Recursion______________
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fib(n - 1) + fib(n - 2);
    ____________________________________*/