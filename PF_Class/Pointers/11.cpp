// Write a function that squares two variables simultaneously using pointers.
#include <iostream>
using namespace std;
// void exp(int* a, int* b);
void exp_ref(int &a, int &b);
int main()
{
    int num1, num2;

    cout << "Enter 2 numbers : \n";
    cout << "Number 1 : ";
    cin >> num1;
    cout << "Number 2 : ";
    cin >> num2;

    // exp(&num1, &num2);
    exp_ref(num1, num2);

    cout << "After Updating\n" ;
    cout << "Number 1 : " << num1 << endl;
    cout << "Number 2 : " << num2 << endl;
}

// void exp(int* a, int* b)
// {
//     *a = *a * *a;
//     *b = *b * *b;
// }
void exp_ref(int &a, int &b)
{
    a = a * a;
    b = b * b;
}