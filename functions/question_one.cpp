#include <stdio.h>
#include <math.h>
#define PI 22.0 / 7

void area_perimeter_of_rectangle(float len, float wid);
void area_circumference_of_circle(float rad);
void area_perimeter_of_right_triangle(float bas, float heig);

int main()
{
    int choice;
    float length, width, radius, base, height;

    printf("\n\tThe shapes you can calculate area and perimeter");
    printf("\n\t-----------------------------------------------");
    printf("\n\t1) Rectangle\n\t2) Circle\n\t3) Right Angled Tringle");
    printf("\n\tPlease choose a figure (1, 2 or 3): ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("\n\tEnter the length and width of your rectangle: ");
        scanf("%f %f", &length, &width);

        area_perimeter_of_rectangle(length, width);
        break;
    case 2:
        printf("\n\tEnter the radius of your circle: ");
        scanf("%f", &radius);

        area_circumference_of_circle(radius);
        break;
    case 3:
        printf("\n\tEnter the base and height of the triangle: ");
        scanf("%f %f", &base, &height);

        area_perimeter_of_right_triangle(base, height);
        break;
    default:
        printf("\n\tInvalid choice!\n\n");
    }
}

void area_perimeter_of_rectangle(float len, float wid)
{
    float area = len * wid;
    float perimeter = (len + wid) * 2;

    printf("\n\tFigure: Rectangle\n");
    printf("\tLength: %.1f Width: %.1f\n\tArea: %.2f Perimeter: %.2f \n\n", len, wid, area, perimeter);
}
void area_circumference_of_circle(float rad)
{
    float area = PI * rad * rad;
    float circumference = PI * (rad * 2);

    printf("\n\tFigure: Circle\n");
    printf("\tRadius: %.1f\n\tArea: %.2f circumference:%.2f \n", rad, area, circumference);
}
void area_perimeter_of_right_triangle(float bas, float heig)
{
    float area = 1.0 / 2 * bas * heig;
    float hypotenus = sqrt((bas * bas) + (heig * heig));
    float perimeter = bas + heig + hypotenus;

    printf("\n\tFigure: Right Angled Triangle\n");
    printf("\tbase: %.1f fheight: %.1f\n\tArea: %.2f Perimeter: %.2f\n\n", bas, heig, area, perimeter);
}
