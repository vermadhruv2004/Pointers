#include <stdio.h>
// To use Logical Operator
// To print a number is greater than 9 and less than 100 ---> True

int main()
{
    int x;
    printf("Enter a Number");
    scanf("%d", &x);

    printf("%d\n", x>9 && x<100);

return 0;
}