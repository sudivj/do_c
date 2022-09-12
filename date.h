#include <stdio.h>
#include "Monthdays.h"

int monthdate(int number,int Year2)
{
    int r, value, count = 1, month, days, pass = 11;
    value += monthd(Year2, count);

    for (int i = 0; i < pass; i++)
    {
        if (value < number)
        {
            if ((value + monthd(Year2, count + 1)) > number)
            {
                pass = 1;
            }
            else
            {
                count++;
                value += monthd(Year2, count);
            }
        }
    }
    days = number - value;
    if (days == 0)
    {
        days = 1;
        count = count + 1;
    }
    else
    {
        count = count + 1;
    }

    //printf("%d",value);
    //printf("%d", count);
    //printf("%d", days);
    r = (count * 100) + days;

    return r; 
       
}