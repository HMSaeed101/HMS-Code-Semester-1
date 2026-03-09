// Checking Prime Number
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a Number : ";
    cin >> num;

    for(int i=2; i*i<num; i++)
    {
        if(num % i != 0)
        {
            cout << "Prime Number";
            return 0;
        }
    }
    cout << "Not a Prime Number.";
}