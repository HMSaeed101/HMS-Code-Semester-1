// Table Calculator

#include <iostream>
using namespace std;
int main()
{    int i,n;
     cout << " Enter any Number for a Table : ";
     cin >> n;
     cout << "Table of " << n << endl;
     for(i=1 ; i<=10 ; i++)
          {cout << n << " x " << i << " = " << n*i << endl;}         
}