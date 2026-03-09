// Add, Subtract and Multiply two input numbers

#include <iostream>
using namespace std;
int main() {
    
     cout << "Enter Two Numbers: " << endl;
     int num1, num2;
     cin >> num1 >> num2;

     int sum, minus, multiply, divide;

     sum= num1 + num2;
     multiply = num1 * num2;
     minus = num1 - num2;
     divide = num1 / num2;

     cout << "Sum: " << sum << endl;
     cout << "Minus: " << minus << endl;
     cout << "Multiply: " << multiply << endl;
     cout << "Divide: " << divide << endl;

     return 0;
}