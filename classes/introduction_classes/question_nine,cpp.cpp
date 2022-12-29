#include <iostream>
using namespace std;

class conversion
{
private:
    float grams;
    float kilograms;
    float packages;
public:
    void get_input();
    void calculate();
    void output();
};

int main()
{
    conversion convert;

    convert.get_input();
    convert.calculate();
    convert.output();



    return 0;
}
void conversion::get_input()
{
    cout << "Enter the weight of the package in grams: ";
    cin >>grams;
}
void conversion::calculate()
{
    kilograms = grams / 1000;
    packages = 1000 / grams;
}
 void conversion::output()
 {
    cout << "The weight of the package is " << kilograms << " kilograms. It takes " << packages << " such packages to form one kilogram." << endl;
 }

