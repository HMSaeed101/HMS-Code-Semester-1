// Pass by Address (not simply reference) using Pointers

#include <iostream>
using namespace std;
int power(int *a, int *b);
int main()
{
    int num1, num2, result;
    cout << "Enter two Numbers.\n";
    cout << "Number 1 : ";
    cin >> num1;
    cout << "Number 2 : ";
    cin >> num2;

    result = power( &num1, &num2 );
    cout << result;
}

int power(int *a, int *b)
{
    int answer = 1;
    for(int i=1; i<=*b; i++)
    {
        answer = answer * (*a);
    }
    return answer;
}