#include <stdio.h>
// To calculate area and cicumference of a circle

int main()
{
    float r,A,C;
    printf("Enter Radius");
    scanf("%f", &r);

    A=3.14*r*r;
    C=2*3.14*r;

    printf("area of a circle is %f\n,circumference of circle is %f", A,C);

return 0;    
}