// 5)Write a program that accepts measurements in cm and converts them into metres. If someone enters 200 for example, the output should take the form;200 cm = 2 metres. using structures

#include <iostream>
using namespace std;

class conversion
{
private:
    float cm;
    float metres;

public:
    void get_measurements();
    void conversion2();
    void output();
};

int main()
{
    conversion measurments;

    measurments.get_measurements();
    measurments.conversion2();
    measurments.output();

    cout<<"\n\n";


    return 0;
}
void conversion::get_measurements()
{
    cout << "Enter the Measurments in cm : ";
    cin >>cm;
}
void conversion::conversion2()
{
    metres =cm / 100;
}
void conversion::output()
{
    cout <<cm<< " cm = " << metres << " metres" << endl;
}


