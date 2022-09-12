#include <stdio.h>
#include <string.h>

char NIC[11];

int main()
{
    strcpy(NIC,"77131324");   
    int value;
    char valuestring[10];
    int start = 1, count = 4 - 1 ;
    int i;
    int n;   
    for (i = 0; i < 3; i++)
    {
        n = i;
        value = NIC[(start - 1) + n];
        valuestring[n] = value;
    }
    printf("%d\n", i);
    puts(valuestring);
    printf("%d\n", n);

    return 0;
}
