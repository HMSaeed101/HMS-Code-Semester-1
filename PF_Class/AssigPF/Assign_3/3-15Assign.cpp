// Create a function int fibonacci(int n) that calculates the nth Fibonacci number 
// Then optimize it by creating a version that uses an array to store previously calculated values to avoid redundant calculation (Memoization / Dynamic Programming)
#include <iostream>
using namespace std ;
int fibonacci(int n);
int fib_arr[46];
int main()
{
    // Init memoization array with -1 (as sentinel value) to indicate "not calculated"
    for(int i = 0; i < 46; i++)
    {
        fib_arr[i] = -1;
    } 

    int nth, nth_fib;
    for(;;)
    {
        cout << "What'th Fibonacci number to find: ";
        cin >> nth;
        if(nth < 0) 
        {
            cout << "Exiting program.\n";
            break;
        }
        if(nth >= 46) 
        {
            cout << "Please enter a number less than 46.\n";
            continue;
        }

        nth_fib = fibonacci(nth);     // Function call
    
        cout << "Fibonacci(" << nth << ") = " << nth_fib << endl;

    }
}


int fibonacci(int n)
{
    // Base cases for recursion
    if(n == 0) 
            {fib_arr[0] = 0; return 0;}
    if(n == 1) 
            {fib_arr[1] = 1; return 1;}

    if(fib_arr[n] != -1) 
    {
        return fib_arr[n];
    }

    return fibonacci(n - 1) + fibonacci(n - 2);
}