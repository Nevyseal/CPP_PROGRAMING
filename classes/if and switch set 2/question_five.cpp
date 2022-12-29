#include <iostream>
#include <stdlib.h>
using namespace std;

class students
{
private:
    int subject1, subject2, subject3, subject4, subject5;
    int sum;
    float average;
public:
    void get_input();
    void compute_output();
};

int main()
{
    students stndt_1;

    stndt_1.get_input();
    stndt_1.compute_output();

    // input

}
 void students::get_input()
 {
    cout<<"\nEnter marks:\n";
    fflush(stdin);
    cin>>subject1>>subject2>>subject3>>subject4>>subject5;
 }
 void students::compute_output()
 {
    sum =subject1 + subject2 + subject3 + subject4 + subject5;
    average = sum / 5.0;

    if ((average >= 75) && (average <= 100))
        cout<<"\n\tDistinction.\n";

    else if ((average >= 65) && (average < 75))
        cout<<"\n\tCredit.\n";

    else if ((average >= 50) && (average < 65))
        cout<<"\n\tPass.\n";

    else if ((average >= 0) && (average < 50))
        cout<<"\n\tFail.\n";
 }
