// BMI Calculator
// Assignments

#include <iostream>
using namespace std;
int main()
{
     float weight, height;
     cout << "Enter your Weight in Kilograms : ";
     cin >> weight;
     cout << "Enter your Height in Meters : ";
     cin >> height;

     float BMI = weight / (height * height);

     cout << "Your Body Mass Index is = " << BMI;

     if (BMI >= 30)           {  cout << "\n OBESE !!!";    }
     else if (BMI >= 25)      {  cout << "\n Overweight";   }
     else if (BMI >= 18.5)    {  cout << "\n Normal";       }
     else                     {  cout << "\n Underweight";  }
}