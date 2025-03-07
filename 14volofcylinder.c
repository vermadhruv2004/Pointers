#include <stdio.h>
// To find the volume of a Cylinder

int main()
{
    float r,h,V;
    printf("Enter radius and height\n");
    scanf("%f %f", &r, &h);
    
    V=3.14*r*r*h;
    printf("The volume of a cylinder is %f", V);

return 0;
}