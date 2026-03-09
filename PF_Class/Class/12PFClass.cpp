// Paper Grading

#include <iostream>
using namespace std;
int main ()
{
     float eng, urdu, isl, phy;
     
     cout << "Enter your Marks in eng, urdu, isl, phy ";

     cin >> eng >> urdu >> isl >> phy;

     cout << "Enter Total Marks";
     float cin >> total;
     
     float obt_marks = eng + urdu + isl + phy ;
     float per = obt_marks / total * 100;

     if (per >= 90)
     {    if (per>= 95){cout << "Grade AAA";}
          else 
               {if (per > 93){cout << "Grade AA";}
               else {cout << "Grade A";}}             
     }


     else if 
     (percentage>=80) {cout << "Grade B";}
     else if 
     (percentage >= 60) {cout << "Grade C";}


     else {cout << "Fail";}
}