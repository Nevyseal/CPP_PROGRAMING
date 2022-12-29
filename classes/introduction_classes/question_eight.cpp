#include <iostream>
using namespace std;

class conversion
{
private:
    float km;
    float metres;

public:
    void get_input();
    void calculate();
    void output();
};

int main()
{
    conversion distance;

    distance.get_input();
    distance.calculate();
    distance.output();



    return 0;
}
void conversion::get_input()
{
    cout << "Enter the Distance in Kilometer: ";
    cin >>km;
}
void conversion::calculate()
{
   metres = km * 1000;
}
 void conversion::output()
{
  cout << km << " km = " << metres << " metres" << endl;
}
