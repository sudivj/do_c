#include <stdio.h>
#include <string.h>
char encoded[100];
char * Encode(char N[]){

    char name[100];
    strcpy(name,N);  
    char alphebet[] = "abcdefghijklmnopqrstuvwxyyz";    
    char newnum[] = "0";
    int n;
    int length;
    char found[100];
    int null = 0;
    int i = 1;


    length = strlen(name);    

    for (n = 0; n < length; n++)
    {
        for (i = 1; i < strlen(alphebet); i++)
        {            
            if (name[n] == alphebet[i-1])
            { 
                sprintf(found,"%d",i);               
                if (i > 10)
                {
                    strcat(encoded,found);                    
                }
                else{                    
                    strcat(newnum,found);
                    strcat(encoded,newnum);
                }                
                sprintf(newnum,"%d",null);
                int i = 1;
                                
            }
            
        }
        
    }
    //puts(encoded);

    return encoded;

}


int main() {

    char encname[100];
    strcat(encname,Encode("Sudiv"));
    puts(encname);    

    return 0;
}