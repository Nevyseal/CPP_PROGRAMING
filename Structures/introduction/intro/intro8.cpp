#include <iostream>
using namespace std;

struct km
{
    float km;
    float metres;
};

int main()
{
    km k;
    cout << "Enter the km: ";
    cin >> k.km;
    k.metres = k.km * 1000;
    cout << k.km << " km = " << k.metres << " metres" << endl;
    return 0;
}

