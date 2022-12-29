// Write a program that accepts distance traveled in metres and the time taken in minutes and then outputs the speed in kilometers per hour (km/h). E.g. if someone enters a distance (in metres) of 500 and a time (in minutes) of 15 the output for speed should be 2 km/h using structures

#include <iostream>
using namespace std;

class conversion
{
private:
    float distance;
    float time;
    float speed;

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
    cout << "Enter the distance travelled in metres: ";
    cin >>distance;
    cout << "Enter the time taken in minutes: ";
    cin >>time;
}
void conversion::calculate()
{
    speed = (distance / 1000) / (time / 60);
}
void conversion::output()
{
    cout << "The speed is: " << speed << " km/h" << endl;
}
