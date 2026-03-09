// Switch Operator
#include <iostream>
using namespace std;
int main()
{
for (;;)
     {    int a,b;
          char op;
          cout << "Enter any arithmetic expression : (+ , - , / , % , *)";
          cin >> a >> op >> b;

          switch(op)
          {    case '+':
               cout << a+b << endl;
               break;

               case '-':
               cout << a-b << endl;
               break;

               case '*':
               cout << a*b << endl;
               break;

               case '/':
               cout << a/b << endl;
               break;

               case '%':
               cout << a % b << endl;
               break;
               
               default:
               cout << "Operator is Wrong" << endl;
          }
     }
}