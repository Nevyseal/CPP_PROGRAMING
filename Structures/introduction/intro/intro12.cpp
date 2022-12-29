#include <iostream>
using namespace std;

struct phrase
{
    int count;
};

int main()
{
    phrase p;
    p.count = 0;
    do
    {
        cout << "God bless Kenya" << endl;
        p.count++;
    } while (p.count < 25);
    return 0;
}
