#include <iostream>
using namespace std;
int main()
{
     int a;
     int b;
     char op;
     cout << "Enter the expression. ";
     cin >> a >> op >> b;

     if(op =='+')         {cout<<" Addition = "<< a+b <<endl;}

     else if (op =='-')   {cout<<" Subtraction = "<< a-b <<endl;} 
     else if (op =='/')   {cout<<" Division = "<< a/b <<endl;} 
     else if (op =='%')   {cout<<" Remainder = "<< a % b <<endl;}

     else
     cout << " Invalid input "<<endl;

     return 0;
}