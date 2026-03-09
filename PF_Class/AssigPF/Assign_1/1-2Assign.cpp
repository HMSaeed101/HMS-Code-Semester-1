// Checking Character Type
// Assignments
#include <iostream>
using namespace std;
int main()
{
     char a;
     cout << "Enter Any Character : ";
     cin >> a;
     
     if (a >= 'A' && a <= 'Z')
          {cout << "Uppercase Letter !!!";
          if ( a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U')
          {cout << "\n Vowel";}
          else {cout << "\n Consonant";}
          }

     else if (a >= 'a' && a <= 'z')
          {cout << "Lowercase Letter !!!";
          if ( a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
          {cout << "\nVowel";}
          else {cout << "\nConsonants";}
          }

     else if (a >= '0' && a <= '9')    {cout << "\n Digit!!";}
     else                          {cout << "\n Other Character ";}
}