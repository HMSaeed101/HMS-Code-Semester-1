// Create functions for temperature conversion: 
// double celsiusToFahrenheit(double c)
// double fahrenheitToCelsius(double f)
// double celsiusToKelvin(double c)
// double kelvinToCelsius(double k)
// Write a main function with a menu-driven program using switch-case that lets users choose conversions
#include <iostream>
using namespace std;

double celsiusToFahrenheit(double c);
double fahrenheitToCelsius(double f);
double celsiusToKelvin(double c);
double kelvinToCelsius(double k);

int main()
{
    int choice;
    double temp, result;

    cout << "Select the required temperature conversion:\n";
    cout << "1. Celsius to Fahrenheit\n";
    cout << "2. Fahrenheit to Celsius\n";
    cout << "3. Celsius to Kelvin\n";
    cout << "4. Kelvin to Celsius\n";
    cin >> choice;

    cout << "Enter the temperature: ";
    cin >> temp;

    switch(choice)
    {
        case 1:
            result = celsiusToFahrenheit(temp);
            break;

        case 2:
            result = fahrenheitToCelsius(temp);
            break;

        case 3:
            result = celsiusToKelvin(temp);
            break;

        case 4:
            result = kelvinToCelsius(temp);
            break;

        default:
            cout << "Invalid choice";
            return 0;
    }

    cout << "Converted Temperature = " << result;
    return 0;
}

double celsiusToFahrenheit(double c)
{
    return (c * 9 / 5) + 32;
}

double fahrenheitToCelsius(double f)
{
    return (f - 32) * 5 / 9;
}

double celsiusToKelvin(double c)
{
    return c + 273.15;
}

double kelvinToCelsius(double k)
{
    return k - 273.15;
}
