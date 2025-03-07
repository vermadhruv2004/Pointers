#include <stdio.h>
// To  find the area and perimeter of rectangle

int main()
{
    float l,b,A,P;
    printf("Enter Length and Breadth\n");
    scanf("%f %f", &l, &b);

    A=l*b;
    P=2*(l+b);
    printf("area of a rectangle is %f, Perimeter of rectangle is %f", A,P);

 return 0;

}