// converts a value from Fahrenheit to Celsius
#include <iostream>
using namespace std;
int main()
{
    float far, cel;
    cout << "Enter temperature in Fahrenheit: ";
    cin >> far;
    cel = 5.0 / 9.0 * (far - 32);
    cout << "Temperature in Celsius = " << cel << " Celsius";
    return 0;
}