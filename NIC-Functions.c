#include <stdio.h>
#include <string.h>

int monthd(int year,int MinD) {


    int days, Monthdays[] = {1,2,1,0,1,0,1,1,0,1,0,1};         
    int leap = year % 4;
    

    if(MinD == 2 ){
        if (leap == 0)
        {
            days = 29;
        }
        if (leap > 0)
        {
            days = 28;
        }        
        
    }
    int day = 1;
    if (Monthdays[MinD - 1] == day)
    {
        days = 31;
    }
    day = 0;
    if(Monthdays[MinD - 1] == day)
    {
        days = 30;
    }
       

    return days;

}

int monthdate(int day,int year)
{
    int result, value, count = 1, month, days, pass = 11;
    value = value + monthd(year, count);

    for (int i = 0; i < pass; i++)
    {
        if (value < day)
        {
            if ((value + monthd(year, count + 1)) > day)
            {
                pass = 1;
            }
            else
            {
                count++;
                value = value + monthd(year, count);
            }
        }
    }
    days = day - value;
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
    result = (count * 100) + days;

    return result; 
       
}