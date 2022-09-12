#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int giveslot(char letter,char string[]){
    int count = 0;
    int result;
    int equal = 0;
    while (equal != 1)
    {
        if (letter == string[count])
        {
            result = (count + 1);
            equal = 1;
        }
        else{
            ++count;
            equal = 0;        
        }
        if (strlen(string) < count)
        {
            printf("Erorr!No such letter in string");
            exit(0);
        }
        
    }

    return result;

}