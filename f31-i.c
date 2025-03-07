#include <stdio.h>
int main()
{
    int h,m,s,sec,r;
    printf("Enter Seconds\n");
    scanf("%d", &sec);

    h=(sec/3600);
    r=sec%3600;
    m=r/60;
    s=r%60;

    printf("H:M:S - %d:%d:%d\n", h,m,s);

    return 0;
}