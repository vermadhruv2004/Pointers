#include <stdio.h>
// To convert Fahrenheit into Celcius

int main()
{
    float C,F;
    printf("Enter temp. in Fahrenheit");
    scanf("%f", &F);
    
    C=(5.0/9)*(F-32);
    printf("Temp. in Celius is: %f", C);

return 0;    
}