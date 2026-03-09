//  Menu-Driven Program 
//  displays a menu and allows the user to select options repeatedly until they choose to exit. (do-while loop)
//  1. Display Hello 
//  2. Display Goodbye 
//  3. Exit 

#include <iostream>
using namespace std;
int main()
{
     int entry;
     do
     {
          cout << "_______________________________";
          cout << "\n\nSelect options." << endl;
          cout << "1. Display Hello" << endl;
          cout << "2. Display Goodbye" << endl;
          cout << "3. Exit\n" << endl;

          cin >> entry;
          switch(entry)
          {
               case 1: cout << "Hello.\n"; break;
               case 2: cout << "Goodbye.\n"; break;
               case 3: cout << "EXITED.\n"; break;
               default: cout << "Try Again.\n";
          }
     }
     while(entry!=3);
}