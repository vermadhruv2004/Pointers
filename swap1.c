#include <stdio.h>
// swapping using three variables

int main(){
    int a,b,c;
    printf("Enter a and b\n");
    scanf("%d %d", &a, &b);

    c=a;
    a=b;
    b=c;

    printf("Swapped value is %d %d",a,b);

    return 0;    
}