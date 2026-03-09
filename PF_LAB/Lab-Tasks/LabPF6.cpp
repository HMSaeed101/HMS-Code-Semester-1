// Farenhiet to Celcius Converter

#include <iostream>
using namespace std;

int main() {
    
     int farenheit;
     cout << "Enter temperature in Farenheit : ";
     cin >> farenheit;

     int celcius = (farenheit - 32) * 5/9;
     cout << "Temperature in Celcius is : " << celcius << " Celcius" <<endl;

    return 0;
}