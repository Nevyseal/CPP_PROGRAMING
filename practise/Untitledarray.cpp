#include<iostream>
using namespace std;

class Rectangle
{
private:
    double length,width,area,perimeter;
public:
    void get_input();
    void compute();
    void output();
};

int main()
{
    int i,number;
    Rectangle figure[100];

    cout<<"How many rectangles do you want to work with :";
    cin>>number;

for(i >= 0; i < number; i++)
    {
    figure[i].get_input();
    figure[i].compute();
    figure[i].output();
    }
}
void Rectangle::get_input()
{

    cout<<"\n\tEnter the Length and width of rectangle :";
    cin>>length>>width;

}
void Rectangle::compute()
{

    area = length * width;
    perimeter = (length + width) * 2;

}
void Rectangle::output()
{

    cout<<"\n\tThe area of the figure is :"<<area;
    cout<<"\n\tThe Perimeter of the figure is :"<<perimeter;
    cout<<"\n\n\n";

}

