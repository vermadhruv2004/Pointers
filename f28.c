#include <stdio.h>
// To find average marks of a student in 5 subject

int main()
{
    float phy,chem,maths,eng,hindi,Total,Average;
    printf("Enter Marks of 5 subjects\n");
    scanf("%f %f %f %f %f", &phy, &chem, &maths, &eng, &hindi);

    Total=(phy+chem+maths+eng+hindi);
    Average=Total/5;
    printf("Total marks is: %f, Avg marks is: %f",Total, Average);

return 0;    
}