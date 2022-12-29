// Write a program that accepts distance traveled in metres and the time taken in minutes and then outputs the speed in kilometers per hour (km/h). E.g. if someone enters a distance (in metres) of 500 and a time (in minutes) of 15 the output for speed should be 2 km/h using structures

#include <iostream>
using namespace std;

struct speed
{
    float distance;
    float time;
    float speed;
};

int main()
{
    speed s;
    cout << "Enter the distance travelled in metres: ";
    cin >> s.distance;
    cout << "Enter the time taken in minutes: ";
    cin >> s.time;
    s.speed = (s.distance / 1000) / (s.time / 60);
    cout << "The speed is: " << s.speed << " km/h" << endl;
    return 0;
}