#include <stdio.h>
// To convert Celcius into Fahrenheit
int main()
{
    float C,F;
    printf("Enter Temp. in Celcius\n");
    scanf("%f", &C);

    F=C*9/5+32;
    printf("Temp. in Fahrenheit is: %f", F);

return 0;
}    