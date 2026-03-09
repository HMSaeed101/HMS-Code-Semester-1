// Write a program that inputs current day and month from the user. It then calculates and displays the total number of days in current year till the entered date using arrays
// Saeed 25-CS-05
// Lab 10 (2)
#include<iostream>
using namespace std;

int main()
{
    int day, month;
    int days[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int total = 0;

    cout << "Enter current month: ";
    cin >> month;

    cout << "Enter current day: ";
    cin >> day;

    // Add days of previous months
    for(int i = 0; i < month - 1; i++)
    {
        total = total + days[i];
    }

    // Add days of current month
    total = total + day;

    cout << "Total days passed till today are: " << total << endl;

    return 0;
}