// Percentage Wise Grading

#include <iostream>
using namespace std;

int main() {
     float math, english, science, urdu;

     cout << "Enter your Marks in Math = ";
     cin >> math;

     cout << "Enter your Marks in English = ";
     cin >> english;

     cout << "Enter your Marks in Science = ";
     cin >> science;

     cout << "Enter your Marks in Urdu = ";
     cin >> urdu;

     float obt_marks = math + english + science + urdu;
     float total = 400;
     float percentage = obt_marks / total * 100;

     cout << "\n RESULT " << endl;
     cout << "Your Obtained Marks are Marks = " << obt_marks << endl;
     cout << "Your Percentage is = " << percentage << " % " << endl;

     if (percentage > 70) 
     {    if (percentage >= 90){ 
               if (percentage >= 95) { cout << "\n With Grade A+";}
               else { cout << "\n With A Grade";}}
          else if (percentage >= 80) {cout << "\n With B Grade";}
          else { cout << "\n With Grade C";}
     }

     else if (percentage <= 70) {cout << "\n With Grade D";}
     else {cout << "You are FAILED";}
}