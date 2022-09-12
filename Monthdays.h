#include <stdio.h>
#include <string.h>

int monthdays(int year_1, int Month)
{

    int result_1 = 0, Monthdays[] = {1, 2, 1, 0, 1, 0, 1, 1, 0, 1, 0, 1};
    int leap = year_1 % 4;

    if (Month == 2)
    {
        if (leap == 0)
        {
            result_1 = 29;
        }
        if (leap > 0)
        {
            result_1 = 28;
        }
    }
    if (Monthdays[Month - 1] == 1)
    {
        result_1 = 31;
    }
    if (Monthdays[Month - 1] == 0)
    {
        result_1 = 30;
    }

    return result_1;
}
