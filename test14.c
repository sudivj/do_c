#include <stdio.h>

int main()
{
    int cm, km, m;
    printf("Enter length in centimeters: ");
    scanf("%d", &cm);
    m = cm / 100;
    km = m / 1000;    
    printf("%d km\t %d m", km, m);
    return 0;
}