#include <stdio.h>
// To check if a number is even or odd
// 1= even
// 0= odd

int main()
{
    int x;
    printf("Enter a number");
    scanf("%d", &x);

    printf("%d", x%2==0);

return 0;     
}