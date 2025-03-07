#include <stdio.h>
// To convert Ruppees into Paisa

int main()
{
    float R,P;
    printf("Enter money in Ruppees\n");
    scanf("%f", &R);

    P=(100*R);
    printf("Money in Paisa is: %f", P);

return 0;    
}