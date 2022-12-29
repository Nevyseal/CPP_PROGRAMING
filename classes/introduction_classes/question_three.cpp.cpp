#include <iostream>
#include <cmath>
using namespace std;

class Rectangle
{
private:

    double width ,length, area, perimeter;


public:
    Rectangle(double leng, double wid);
    void get_data();
    void compute();
    void display_data();


};

int main()
{
    Rectangle rect1(14,15);

    rect1.get_data();

    rect1.compute();

    rect1.display_data();



    return 0;
}
Rectangle::Rectangle(double leng, double wid)
{
   length = leng;
   width = wid;
}
void Rectangle::get_data()
{
    cout << "Enter the length of the rectangle: ";
    cin >>length;
    cout << "Enter the width of the rectangle: ";
    cin >>width;
}
void Rectangle::compute()
{
    area = length * width;
    perimeter= 2 * ( length + width);
}
void Rectangle::display_data()
{
    cout << "\n\tThe area of the rectangle is: " <<area;
    cout << "\n\tThe perimeter of the rectangle is: " <<perimeter << "\n\n"<<endl;
}

