#include <stdio.h>
// To perform all airthmetic operations

int main()
{
    int a,b,c;
    float x;
    printf("enter a and b numbers\n");
    scanf("%d %d", &a, &b);
    
    c=a+b;
    printf("Addition is %d\n", c);

    c=a-b;
    printf("Substraction is %d\n", c);

    c=a*b;
    printf("Multiplication id %d\n", c);

    x=(float)a/(float)b;
    printf("Division is %f\n", x);

    c=a%b;
    printf("Modulus is %d\n", c);

return 0;    

} 