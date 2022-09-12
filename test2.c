#include <stdio.h>
#include <string.h>

int main() {
    struct var
    {
        char name[2];
        char null[2];

    };
    struct var v;

    strcpy(v.name,"1");
    strcpy(v.null,"0");
    strcat(v.null,v.name);
    puts(v.null);
    return 0;

    
}