#include <iostream>
using namespace std;
int main()
{
     double num1, num2, result;
     int operation;
     cout << "Enter first number: ";
     cin >> num1;
     cout << "Enter second number: ";
     cin >> num2;

     // Display menu for selecting an operation
     
     cout << "Select operation to perform: \n";
     cout << "1. Addition (+)\n";
     cout << "2. Subtraction (-)\n";
     cout << "3. Multiplication (*)\n";
     cout << "4. Division (/)\n";
     cin >> operation;

     switch (operation) 
     {
          case 1:
          result = num1 + num2;
          cout << "Result: " << num1 << " + " << num2 << " = " << result << endl;
          break;

          case 2:
          result = num1 - num2;
          cout << "Result: " << num1 << " - " << num2 << " = " << result << endl;
          break;

          case 3:
          result = num1 * num2;
          cout << "Result: " << num1 << " * " << num2 << " = " << result << endl;
          break;

          case 4:
               if (num2 != 0) 
                    {result = num1 / num2;
                    cout << "Result: " << num1 << " / " << num2 << " = " << result << endl;} 
               else 
                    {cout << "Error: Division by zero is not allowed." << endl;}
          break;

          default:
               {cout << "Invalid operation choice! Please select 1, 2, 3, or 4." << endl;}
               
          return 0;
     }
}