// Calculator 

#include <iostream>
using namespace std;
int main()
{
     for(;;)
     {    float num1;
          float num2;
          char op;

          cout << "\nEnter the Expression = ";
          cin >> num1 >> op >> num2 ;
          cout << "RESULT = ";

          if (op=='+'){ cout << num1 + num2 << endl;}
          else if (op=='-'){ cout << num1 - num2 << endl;}
          else if (op=='*'){ cout << num1 * num2 << endl;}
          else if (op=='/'){ cout << num1 / num2 << endl;}
          else {cout << "Invalid Operator" << endl;} 
          cout << "______________________________________________________________\n";
     }

}