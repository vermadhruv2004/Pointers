#include <stdio.h>
// To find the volume of a cone

int main()
{
    float r,h,V;
    printf("Enter radius and height\n");
    scanf("%f %f", &r, &h);

    V=3.14*r*r*h/3;
    printf("Volume of a cone is %f", V);

return 0;    
}