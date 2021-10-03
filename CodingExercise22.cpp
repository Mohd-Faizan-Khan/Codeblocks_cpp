#include <iostream>
using namespace std;

double temp_celsius(double temp_fahr);
double temp_kelvin (double temp_celsius);

int main()
{
    double temp_fahr;
    cout << "Enter the temperature in Fahrenheit: ";
    cin >> temp_fahr;

    cout << "\nThe temperature in Celsius will be "<< temp_celsius(temp_fahr) << endl;
    cout << "\nThe temperature in Kelvin will be " << temp_kelvin(temp_celsius(temp_fahr)) << endl;
    return 0;
}

double temp_celsius(double temp_fahr)
{
    double celsius = (temp_fahr- 32)* 5.0/9.0;
    return celsius;
}

double temp_kelvin (double temp_celsius)
{
    double kelvin = temp_celsius + 273.15;
    return kelvin;
}
