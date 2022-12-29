#include <iostream>
using namespace std;

struct weight
{
    float grams;
    float kilograms;
    float packages;
};

int main()
{
    weight w;
    cout << "Enter the weight of the package in grams: ";
    cin >> w.grams;
    w.kilograms = w.grams / 1000;
    w.packages = 1000 / w.grams;
    cout << "The weight of the package is " << w.kilograms << " kilograms. It takes " << w.packages << " such packages to form one kilogram." << endl;
    return 0;
}

