// Function's argument (Pass by Reference "&")
#include<iostream>
using namespace std;
void square(int &a);
int main()
{
     int num;
     cout << "Enter any number : ";
     cin >> num;

     square(num); // just calling the function (no return value)
     cout << num;
}

void square(int &a)
{
     a = a * a;
}