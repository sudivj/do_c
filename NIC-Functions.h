#include <stdio.h>
#include <string.h>
int monthdays(int year_1, int Month) // Dates of the months of a year.
{

    int result_1 = 0, Monthdays[] = {31, 2, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int leap = year_1 % 4;

    if (Month == 2)
    {
        if (leap == 0)
        {
            result_1 = 29;
        }
        else
        {
            result_1 = 28;
        }
    }
    else
    {
        result_1 = Monthdays[Month - 1];
    }

    return result_1;
}

int MonthDate(int doy, int year) // Gives month and date form the given Day of year.

{
    int MD_date, MD_month;
    int MD_dates[370];
    int MD_months[370];
    int MD_num = 0;
    for (int i = 0; i < 12; i++)
    {
        for (int i2 = 0; i2 < monthdays(year, i + 1); i2++)
        {
            ++MD_num;
            MD_dates[MD_num] = i2 + 1;
            MD_months[MD_num] = i + 1;
            // printf("%d : %d\n", MD_dates[MD_num], MD_months[MD_num]);
        }
    }
    MD_month = MD_months[doy];
    MD_date = MD_dates[doy];

    // printf("------------------\n");
    // printf("%d : %d", MD_month , MD_date);
    int MD_result = (MD_month * 100) + MD_date;

    return MD_result;
}

int break_str(int position, int count_3, char NIC[]) // Substring from a string.
{
    int number_2 = 0, result_3 = 0;
    number_2 = NIC[position - 1];

    result_3 = result_3 + number_2 - 48;
    for (int i_3 = position; i_3 < (position + count_3 - 1); i_3++)
    {
        result_3 = result_3 * 10;
        number_2 = NIC[i_3];
        result_3 = result_3 + number_2 - 48;
    }

    // printf("%d", result_3);
    return result_3;
}

int NIC_ON(char NIC[]) // Old or New NIC.
{
    if (strlen(NIC) == 10)
    {
        return 3;
    }
    else if (strlen(NIC) == 12)
    {
        return 4;
    }
    else
    {
        return 0;
    }
}

char *monthname(int month_mn)
{
    char *month_names[] = {"January","February","March","April","May","June","July","August","September","Octorber","November","December"};
    // printf("%s",month_names[month_mn - 1]);

    return month_names[month_mn - 1];    
}