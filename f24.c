#include <stdio.h>
// To use Ternary operator
// To find if a person is eligible for vote or not

int main()
{
    int age;
    printf("Enter age");
    scanf("%d", &age);

    age>=18? printf("adult\n"): printf("not adult\n");

return 0;    
}