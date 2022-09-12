#include <stdio.h>
void red()
{
    printf("\033[0;31m");
}

void yellow()
{
    printf("\033[0;33m");
}
void black()
{
    printf("\033[0;30m");
}
void cyan()
{
    printf("\033[0;36m");
}
void green() 
{
    printf("\033[0;32m");
}
void blue()
{
    printf("\033[0;34m");
}

void reset()
{
    printf("\033[0m");
}