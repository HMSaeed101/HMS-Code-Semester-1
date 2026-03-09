// A calculator module performs operations based on user choice.
// Write a program that: 
// • Inputs two numbers and an operator (+, -, *, /) in main()and Passes them to a function 
// • The function uses a switch statement to perform the operation 
// • Displays the result

#include <iostream>
using namespace std;
void calculator(float a, float b, char op);
int main()
{
    float num1, num2;
    char op;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> num2;

    calculator(num1, num2, op);

}

void calculator(float a, float b, char op)
{
    switch(op)
    {
        case '+':
            cout << "Result = " << a + b;
            break;

        case '-':
            cout << "Result = " << a - b;
            break;

        case '*':
            cout << "Result = " << a * b;
            break;

        case '/':
            if(b != 0)
                cout << "Result = " << a / b;
            else
                cout << "Division by zero not allowed";
            break;

        default:
            cout << "Invalid operator";
    }
}
