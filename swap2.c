#include <stdio.h>
// swapping using only two variables

int main(){
    int a,b;
    printf("Enter a and b\n");
    scanf("%d %d", &a, &b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("Swapped values are %d %d", a,b);
return 0;
}