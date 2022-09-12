#include <string.h>
#include <stdio.h>
#include <stdlib.h>
char * encoded;
char * name; 
char alphebet[] = "abcdefghijklmnopqrstuvwxyyz";
int enlen;
  

char * encode(char en[]) {
    enlen = strlen(en);       
    char newnum[100] = "0" ;
    int length;
    char found[100];
    int null = 0;

    name = (char*)malloc(enlen * sizeof(char));
    strcat(name,en);
    length = strlen(name);
    encoded = (char*)malloc((length * 2) * sizeof(char));                                  

    for (int n = 0; n < length; n++)
    {
        for (int i = 1; i < strlen(alphebet); i++)
        {            
            if (name[n] == alphebet[i-1])
            {
                sprintf(found,"%d",i);               
                if (i > 9)
                {
                    strcat(encoded,found);                      
                }                
                else
                {                    
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

char * encodeintro(char en[]) {
    enlen = strlen(en);       
    char newnum[100] = "0" ;
    int length;
    char found[100];
    int null = 0;

    name = (char*)malloc(enlen * sizeof(char));
    strcat(name,en);
    length = strlen(name);
    encoded = (char*)malloc((length * 2) * sizeof(char));                                  

    for (int n = 0; n < length; n++)
    {
        for (int i = 1; i < strlen(alphebet); i++)
        {            
            if (name[n] == alphebet[i-1])
            {
                sprintf(found,"%d",i);               
                if (i > 9)
                {
                    strcat(encoded,found);
                    printf("%c = %s\n",name[n],found);                      
                }                
                else
                {                    
                    strcat(newnum,found);
                    strcat(encoded,newnum);
                    printf("%c = %s\n",name[n],newnum);  
                }
                              
                sprintf(newnum,"%d",null);
                int i = 1;
                
                                
            }
            
        }
        
    }
    //puts(encoded);

    return encoded;
}
