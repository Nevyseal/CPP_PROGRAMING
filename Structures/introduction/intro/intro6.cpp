#include <iostream>
using namespace std;

struct celsius
{
    float celsius;
    float fahrenheit;
};

int main()
{
    celsius c;
    cout << "Enter the temperature in degrees Celsius: ";
    cin >> c.celsius;
    c.fahrenheit = (c.celsius * 9 / 5) + 32;
    cout << c.celsius << " degrees Celsius = " << c.fahrenheit << " degrees Fahrenheit" << endl;
    return 0;
}

