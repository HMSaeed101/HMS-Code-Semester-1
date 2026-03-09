//Calculating Marks and Percentage of 3 Subjects

#include <iostream>
using namespace std;

int main() {
    
     int PF,Cicuit_Analysis, DLD;

     cout << "Enter your marks in Programming Fundamentals : ";
     cin >> PF;

     cout << "Enter your marks in Circuit Analysis : ";
     cin >> Cicuit_Analysis;

     cout << "Enter your marks in Digital Logic Design : ";
     cin >> DLD;
     
     int total = PF + Cicuit_Analysis + DLD;
     cout << "Your Total Marks are : " << total << endl;

     int average = total / 3;
     cout << "Your Average Marks are : " << average << endl;

     float percentage = (total / 300.0) * 100;
     cout << "Your Percentage is : " << percentage << "%" << endl;

    return 0;
}