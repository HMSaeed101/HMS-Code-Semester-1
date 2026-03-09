// Calculating Volume of Cylinder

#include <iostream>
using namespace std;

int main() {
    
     int r;
     int h;

     cout << "  Enter the Height in metres : ";
     cin >> h;

     cout << "  Enter the radius in metres :  ";
     cin>> r;

     int Volume = 3.14 * r * r * h;
     cout << "The Volume of the Cylinder is :" << Volume << " Metre Cube " << endl;

    return 0;
}