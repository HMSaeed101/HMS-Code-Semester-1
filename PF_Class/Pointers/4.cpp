// Write a program to swap two numbers using pointers.

#include <iostream>
using namespace std;
void swap(int *a, int* b);
int main()
{
    int num1 , num2;
    cout << "Enter first Number : ";
    cin >> num1;
    cout << "Enter second Number : ";
    cin >> num2;

    swap(&num1, &num2);

    cout << num1 << endl;
    cout << num2 << endl;
}
void swap(int *a, int* b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}