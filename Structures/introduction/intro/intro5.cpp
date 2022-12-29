// 5)Write a program that accepts measurements in cm and converts them into metres. If someone enters 200 for example, the output should take the form;200 cm = 2 metres. using structures

#include <iostream>
using namespace std;

struct cm
{
    float cm;
    float metres;
};

int main()
{
    cm c;
    cout << "Enter the cm: ";
    cin >> c.cm;
    c.metres = c.cm / 100;
    cout << c.cm << " cm = " << c.metres << " metres" << endl;
    return 0;
}

