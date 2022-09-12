#include <stdio.h>
#include <string.h>
struct Detail{
    char name[100];
    char alpheUP[27];
    char alpheDOWN[27];
    
};

struct Detail detail1;

int main() {    
    strcpy(detail1.alpheUP,"ABCDEFGHIJKLMNOPQRSTUYWXYZ");
    strcpy(detail1.alpheDOWN,"abcdefghijklmnopqrstuvwxyz");
        
    int i = 0;
    char letter;
    int UD;

    printf("Enter A or a: ");
    scanf("%c", &letter);

    for ( i = 0; i < 26; i++){
        if (letter == detail1.alpheDOWN[i]){
            UD = 2;
        }                      
    } 

    for ( i = 0; i < 26; i++){
        if (letter == detail1.alpheUP[i]){
            UD = 1;
        }        
    }

    if(UD == 1){
        printf("Uppercase");
    }   
    else{
        printf("Lowercase");
    } 
    return 0;
}