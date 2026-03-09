// Calculating Total Marks and Percentage of a Student

#include<iostream>
using namespace std;
int main()
{   
    int math, eng, urdu, sci, isl, total, percentage;

    cout << "Enter your marks in MATHS:";
    cin>> math;

    cout << "Enter your Marks in English:";
    cin >> eng;

    cout << "Enter your Marks in Urdu:";
    cin >> urdu;

    cout << "Enter your Marks in Science:";
    cin >> sci;

    cout << "Enter your Marks in Islamiat:";
    cin >> isl;

    total = math + eng + urdu + sci + isl;
    percentage = (total/500.0)*100;

    cout << "Your Total Marks are: " << total << endl;
    cout << "Your Percentage is: " << percentage;
    return 0;

}