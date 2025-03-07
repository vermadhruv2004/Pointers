#include <stdio.h>
// C program to find hours, minutes and seconds, given seconds as input

int main()
{
    int h,m,s,sec;
    printf("Enter Seconds\n");
    scanf("%d", &sec);

    h=(sec/3600);
    m=(sec-(3600*h))/60;
    s=(sec-(3600*h)-(60*m));

    printf("H:M:S - %d:%d:%d\n", h,m,s);

return 0;    
}