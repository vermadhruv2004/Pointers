#include <stdio.h>
// to find if a person is eligible for vote or note using if/else

int main()
{
    int age;
    printf("Enter age");
    scanf("%d", &age);

    if(age>=18){
        printf("adult\n");
    }
    else{
        printf("not adult\n");
    }

return 0;    
}