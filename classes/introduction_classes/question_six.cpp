#include <iostream>
using namespace std;

class conversion
{
private:
    float celsius;
    float fahrenheit;

public:
    void get_data();
    void calculate();
    void output();
};

int main()
{
    conversion convert;

    convert.get_data();
    convert.calculate();
    convert.output();



    return 0;
}
void conversion::get_data()
{
    cout << "Enter the temperature in degrees Celsius: ";
    cin >>celsius;
}
 void conversion::calculate()
 {
    fahrenheit = (celsius * 9 / 5) + 32;
 }
void conversion::output()
{
   cout << celsius << " degrees Celsius = " << fahrenheit << " degrees Fahrenheit" << endl;
}
