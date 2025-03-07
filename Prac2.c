#include <stdio.h>

void namaste();
void bonjour();

int main() {
    char ch;
    printf("Enter i for indian and f for french\n");
    scanf("%c", &ch);

    namaste();
    bonjour();
    return 0;
}

 void namaste(){
   printf("Namaste\n");
   bonjour();
 }