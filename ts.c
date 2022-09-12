#include <stdio.h>
#include "Monthdays.h"

// int MonthDate(int doy,int year)
// {
//     int MD_date, MD_month;
//     int MD_dates[370];
//     int MD_months[370];
//     int MD_num = 0;
//     for (int i = 0; i < 12; i++)
//     {
//         for (int i2 = 0; i2 < monthdays(year, i + 1); i2++)
//         {
//             ++MD_num;
//             MD_dates[MD_num] = i2 + 1;
//             MD_months[MD_num] = i + 1;
//             // printf("%d : %d\n", MD_dates[MD_num], MD_months[MD_num]);
//         }
//     }
//     MD_month = MD_months[doy];
//     MD_date = MD_dates[doy];

//     // printf("------------------\n");
//     // printf("%d : %d", MD_month , MD_date);
//     int MD_result = (MD_month * 100) + MD_date;

//     return MD_result;
// }


char *monthname(int month_mn)
{
    char *month_names[] = {"January","February","March","April","May","June","July","August","September","Octorber","November","December"};
    // printf("%s",month_names[month_mn - 1]);

    return month_names[month_mn - 1];    
}