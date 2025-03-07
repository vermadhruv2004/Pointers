#include <stdio.h>
// To calculate shipping charges based on weight and distance travelled by a parcel

int main()
{
    float d,w,C;
    printf("Enter distance travelled and weight of a parcel\n");
    scanf("%f %f", &d, &w);

    // Rs10 per kg and Rs 25 per km
    C=(d*10)+(w*25);

    printf("The charges is:%f", C);

return 0;
}