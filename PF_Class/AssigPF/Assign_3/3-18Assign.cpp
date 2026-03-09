// recursive function int gcd(int a, int b) to find Greatest Common Divisor_Euclidean algorithm
// function int lcm(int a, int b) that uses the GCD function to calculate Least Common Multiple
// Add validation to ensure positive inputs
#include <iostream>
using namespace std;
int lcm_formula(int a, int b);
int gcd_euclidean(int a, int b);
int gcd_brute_force(int a, int b);
int main()
{
    int num1, num2;
    cout << "Enter Two Numbers.\n";
    cout << "Number One : ";
    cin >> num1;
    cout << "Number Two : ";
    cin >> num2;

    if(num1 <=0 || num2 <=0)
    {
        cout << "Invalid Input.";
        return 0;
    }

    int greatest_common_divisor = gcd_brute_force(num1, num2);
    cout << "Greatest Common Divisor (Brute Force) : " << greatest_common_divisor << endl;
    int GCD_Euclidean = gcd_euclidean(num1, num2);
    cout << "Greatest Common Divisor (Euclidean Algo) : " << GCD_Euclidean << endl;
    int least_common_multiple = lcm_formula(num1, num2);
    cout << "Least Common Multiple : " << least_common_multiple;

}

// Greatest Common Divisor (greatest num divides both numbers completely _ Remainder zero)
// Brute Force Algorithm
int gcd_brute_force(int a, int b)
{
    /*
    Calculate all the exact divisors of num1 and num2 
    Starting from num dec to 1
    First divs that are common is the gcd
    */
    int small = (a<b) ? a:b;
    for(int i=small; i>0; i--)
    {
        if( a%i==0 && b%i==0 )
        {
            return i;
        }
    }
    return 1;
}


// GCD by Euclidean Algorithm _ GCD of (a, b) is same as GCD of (b, a % b)
int gcd_euclidean(int a, int b)
{
    // Base case: when remainder becomes zero
    if (b == 0)
        return a;

    // Recursive step
    return gcd_euclidean(b, a % b);
}


// Least Common Multiple (Common to both Multiples Least one)
// Using the Formula ( lcm x gcd = a x b )
int lcm_formula(int a, int b)
{
    int product = a * b;
    int gcd = gcd_brute_force(a, b);
    return product / gcd;
}