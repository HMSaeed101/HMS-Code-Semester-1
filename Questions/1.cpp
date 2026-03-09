// Write a menu driven program which has following options and process them:
// 1. Factorial of a number.
// 2. Prime or not
// 3. Odd or even
// 4. Exit

#include <iostream>
using namespace std;
int main()
{
     int choice;
     do
     {
          cout << "\n\nChoose from the Following : " << endl;
          cout << "1. Factorial of a Number" << endl;
          cout << "2. Prime or Not" << endl;
          cout << "3. Odd or Even" << endl;
          cout << "4. Exit" << endl << endl;
          cin >> choice;

          switch(choice)
          {
               case 1:
                    {
                    cout << "Enter any Number to Find its Factorial : ";
                    int num;
                    cin >> num ;
                    int fact = 1 ;
                    for(int i=1; i<=num; i++)
                         {    fact = fact * i ;   }
                    cout << "Factorial of " << num << " is " << fact ;
                    }
               break;

               case 2:
                    {
                    cout << "Enter Number to find if its Prime or Not :";
                    int num;
                    cin >> num;
                    int counter = 0 ;
                    for(int i=2; i<num; i++)
                    {    if(num % i == 0)
                         {    counter++;     }    }
                    if(counter == 0)
                    {    cout << "This number " << num << " is Prime.";    }
                    else
                    {    cout << "This number " << num << " is NOT Prime.";}
                    }
               break;

               case 3:
                    {
                    cout << "Enter any Number to check if its Even or Odd :";
                    int num;
                    cin >> num;
                    if(num % 2 == 0)
                    {    cout << "This Number " << num << " is Even.";}
                    else
                    {    cout << "This Number " << num << " is Odd.";}
                    }
               break;

               case 4:
                    cout << "\n____________________________________\n"; 
               exit(0);
          }
     }
     while(choice!=4);
}