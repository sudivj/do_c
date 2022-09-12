#include <stdio.h>
#include <ncurses.h>
#include <unistd.h>
#include <math.h>

int main()
{
    double x = 0.0, result;
    while (1)
    {
        x += 0.1;
        if (x > 360)
        {
            x = 0.0;
        }
        result = sin(x);
        napms(100);
    }
    
}