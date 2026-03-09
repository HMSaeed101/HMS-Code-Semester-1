// that asks the user to enter a password. Use a do-while loop to keep asking until the correct password is entered (set password as "password123")
#include <iostream>
#include <string>
using namespace std;
int main()
{
     string entry;
     string password = "password123" ;
     do
     {
          cout << "Enter the Password.";
          cin >> entry;

          if(entry!=password)
          {
               cout << "Wrong Password. Try Again.\n";
          }
     }
     while(entry!=password);
     cout << "CORRECT Password. Access Granted.";
}