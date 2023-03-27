#include <stdio.h>
#include <math.h>
#include <conio.h>
double CircleD(double radius)
{
return (2 * radius);
}
double CircleC(double radius)
{
return (2 * M_PI * radius);
}
double CircleA(double radius)
{
return (M_PI * radius * radius);
}
int main()
{
float radius, diameter, circle, area;
printf("Enter radius of circle: ");
scanf("%f", &radius);
diameter = CircleD(radius);
circle = CircleC(radius);
area = CircleA(radius);
printf("Diameter of the circle = %.2f\n", diameter);
printf("Circumference of the circle = %.2f\n", circle);
printf("Area of the circle = %.2f", area);
return 0;
}
