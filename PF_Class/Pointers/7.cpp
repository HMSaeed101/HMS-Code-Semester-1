// Write a function that calculates the power of a number using pointer parameters.

#include <iostream>
using namespace std;
int power(int* a, int* b);
int main()
{
    int num, exp;
    cout << "Enter a number : ";
    cin >> num;
    cout << "Enter the power number : ";
    cin >> exp;

    int result = power(&num, &exp);
    cout << result;

}

int power(int* a, int* b)
{
    int ans=1;
    for(int i=*b; i>0; i--)
    {
        ans = ans * (*a);
    }
    return ans;
}