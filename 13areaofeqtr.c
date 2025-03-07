#include <stdio.h>
// To print area of an Equilateral Triangle
int main()
{
    float A,h,b;
    printf("enter height and base of a triangle\n");
    scanf("%f %f", &h, &b);

    A=(h*b)/2;
    printf("Area of a scalene triangle is %f", A);

return 0;    
}