#include <stdio.h>
int draw();

int main () {
    int W , L;
    char Wif , Lif;
     printf("Enter a length: ");
     scanf("%d", &L);
     printf("Enter a width: ");
     scanf("%d", &W);

     if(L < 50){
         printf("Are you sure about your length: ");
         scanf("%c", &Lif);

     }
     if(W < 50){
         printf("Are you sure about your Width: ");
         scanf("%c", &Wif);

     }
}