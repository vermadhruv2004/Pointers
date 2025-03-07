#include <stdio.h>
// To calculate Simple Interest

int main()
{
    float p,r,t,SI;
    printf("Enter Principal Amount");
    scanf("%f", &p);

    printf("Enter Rate");
    scanf("%f", &r);

    printf("Enter Time");
    scanf("%f", &t);

    SI = (p*r*t)/100;
    printf("Simple Interest is %f", SI);

return 0;
}