// Prime Factors of a Positive Integer
#include <iostream>
using namespace std;
void factors(int a);
int main()
{
    for(;;)
    {
        int num;
        cout << "\n\nEnter a Number : ";
        cin >> num;
        factors(num);
    }
}

// using void func b/c multiple output printings
void factors(int num)
{
    if(num <= 0)
    {
        cout << "... ERROR ...\n... Enter Positive Integers Only ...";
        return;
    }
    cout << "\nPrime Factors for " << num << " are : ";

    int updated_num = num;

    // Factorization 
    for(int i = 2; updated_num > 1; i++)
    {
        while(updated_num % i == 0)
        {
            cout << i << endl;
            updated_num /= i;
        }
    }
}
