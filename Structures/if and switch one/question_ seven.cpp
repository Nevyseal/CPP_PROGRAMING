#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct shape
{
    int choice, base, height, radius;
    int perimeter, length, width;
    float area, hypotenus;
};

int main()
{
    struct shape sp_1;

    //display the table
    cout<<("\n\t****The shapes you can calculate area and perimeter****\n\n");
    cout<<("\t1) Rectangle\n");
    cout<<("\t2) Circle\n");
    cout<<("\t3) Right Angled Trinagle\n");

    cout<<("\n\tPlease choose a figure from the options given: ");
    cin>>("%d", &sp_1.choice);

    if (sp_1.choice == 1)
    {
        // Rectangle

        cout<<("\n\tArea of Rectangle is Length * Width, and it's perimeter is (Length+Width)*2\n");

        cout<<("\n\tEnter the length of your rectangle: ");
        cin>>("%d", &sp_1.length);
        cout<<("\n\tEnter the width of your rectangle: ");
        cin>>("%d", &sp_1.width);

        sp_1.area = sp_1.length * sp_1.width;
        sp_1.perimeter = (sp_1.length + sp_1.width) * 2;

        cout<<("\n\tFigure: Rectangle | Length:%d Width:%d | Area:%.2f Perimeter:%d \n", sp_1.length, sp_1.width, sp_1.area, sp_1.perimeter);
    }
    else if (sp_1.choice == 2)
    {
        // Circle
        const float PI = 22.0 / 7;
        cout<<("\n\tArea of circle is PI*radius*radius(PI.r^2), and it's perimeter is PI*(radius*2) PI.d\n");

        cout<<("\n\tEnter the radius of your circle: ");
        cin>>("%d", &sp_1.radius);

        sp_1.area = PI * sp_1.radius * sp_1.radius;
        sp_1.perimeter = PI * (sp_1.radius * 2);

        cout<<("\n\tFigure: Circle | Radius:%d | Area:%.2f Perimeter:%d \n", sp_1.radius, sp_1.area, sp_1.perimeter);
    }
    else if (sp_1.choice == 3)
    {
        // Right angled triangle

        cout<<("\n\tArea of right angled triangle is (1/2)*base*height, and it's perimeter is base+height+hypotenus\n");

        cout<<("\n\tEnter the base of the triangle: ");
        cin>>("%d", &sp_1.base);

        cout<<("\n\tEnter the height of the triangle: ");
        cin>>("%d", &sp_1.height);

        sp_1.area = 1.0 / 2 * sp_1.base * sp_1.height;
        sp_1.hypotenus = sqrt((sp_1.base * sp_1.base) + (sp_1.height * sp_1.height));
        sp_1.perimeter = sp_1.base + sp_1.height + sp_1.hypotenus;
        cout<<("\n\tFigure: Right Angled Triangle | base:%d height:%d hypotenus:%.2f | Area:%.2f Perimeter:%d \n", sp_1.base, sp_1.height, sp_1.hypotenus, sp_1.area, sp_1.perimeter);
    }
    else
    {
        cout<<("\n\tInvalid choice!\n");
    }

    return 0;
}
