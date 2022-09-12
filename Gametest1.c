#include <stdio.h>
#include <unistd.h>
#include <ctype.h>

int draw()
{
    char ch;
    int num = 0;
    while (num != -1)
    {
        ++num;
        printf("\rNumber = %d", num);
        fflush(stdout);
        sleep(1);
    }

    return 0;
}

int main()
{
    draw();
}