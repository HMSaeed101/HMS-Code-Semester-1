// Calculating Area and Perimeter of a Rectangle

#include <iostream>
using namespace std;

int main()
 {
    
     double Length = 10 ;
     double Width = 20;
     double Area ;
     double Perimeter ;

     cout << "Enter the Length of the triangle:" ;
     cin>> Length;
     cout << "Enter the Width of the triangle:" ;
     cin>> Width;

     Perimeter = 2 * (Length + Width);
     Area = Length*Length;

     cout << "Area of the triangle is:" << Area << endl;
     cout << "Perimeter of the triangle is:" << Perimeter << endl;

    return 0;
}