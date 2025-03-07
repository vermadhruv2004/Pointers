#include <stdio.h>
// To find the average of 3 numbers

int main()
{
    int n1,n2,n3,Avg;
    printf("Enter three numbers\n");
    scanf("%d %d %d", &n1, &n2, &n3);

    Avg=(n1+n2+n3)/3;
    printf("Average of three no is: %d", Avg);

return 0;    
}