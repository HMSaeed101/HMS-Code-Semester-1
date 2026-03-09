// Lab Task 1 
// Saeed 25-CS-05

#include <iostream>
using namespace std;
int main()
{
     int area, radius, lensq, lenrec, basetri, htri, widrec;
     int num;
     cout << "Select from the following." << endl;
     cout << "1. Area of a Circle" << endl;
     cout << "2. Area of a Square" << endl;
     cout << "3. Area of a Rectangle" << endl;
     cout << "4. Area of a Triangle" << endl;

     cin >> num;
     cout << "\n_______________________\n";

     switch(num)
     {
          case 1:
          cout << "Enter the Radius of a circle.";
          cin >> radius;
          area = 3.14*(radius*radius);
          cout << "Area of the Circle :" << area;
          break;

          case 2:
          cout << "Enter the length of a Square.";
          cin >> lensq;
          area = lensq*lensq;
          cout << "Area of the Square :" << area;
          break;

          case 3:
          cout << "Enter the Length of the Rectangle.";
          cin >> lenrec;
          cout << "Enter the Width of the Rectangle.";
          cin >> widrec;
          area = lenrec * widrec;
          cout << "Area of the Rectangle :" << area;
          break;

          case 4:
          cout << "Enter the Base of a triangle.";
          cin >> basetri;
          area = (basetri*htri)/2;
          cout << "Area of the Triangle :" << area;
          break;

          default:
          cout << "Try again";
          break;
     }
}