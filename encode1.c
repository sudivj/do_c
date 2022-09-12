#include <stdio.h>
#include "encode.h"

int main()
{
    char en[100];
    char name[100];
    printf("Enter name: ");
    scanf("%s", name);
    strcat(en, encodeintro(name)); // Use encode to print the result without a introduction.
    printf("%s = %s\n", name, en);

    return 0;
}