// 10)Write a program that accepts the age of a person, if the person is 18 and above, it should print You can vote. otherwise it should print You are too young to vote. using structures

#include <iostream>
using namespace std;

struct age
{
    int age;
};

int main()
{
    age a;
    cout << "Enter your age: ";
    cin >> a.age;
    if (a.age >= 18)
    {
        cout << "You can vote" << endl;
    }
    else
    {
        cout << "You are too young to vote" << endl;
    }
    return 0;
}