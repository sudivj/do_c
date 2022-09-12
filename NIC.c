#include <stdio.h>
#include <string.h>
#include "NIC-Functions.h"

int main()
{
    int year, doy, on, md, month, date, serial_num, check_dig;
    int pos = 8;
    char gender, special_letter;
    char nic[13];
    printf("Enter nic: ");
    scanf("%s", nic);
    printf("================\n");
    on = NIC_ON(nic); // New NIC / Old NIC.p
    if (on == 3)
    {
        year = break_str(1, 2, nic);
        year = 1900 + year;
        pos = 6;
        special_letter = nic[9];
        doy = break_str(3, 3, nic); // doy = Date of year
    }
    else
    {
        year = break_str(1, 4, nic);
        doy = break_str(5, 3, nic);
    }
    int leap = year % 4;
    // printf("%d", leap);
    if (doy > 500)
    {
        gender = 'F';
        doy = doy - 500;
    }
    else
    {
        gender = 'M';
    }
    md = MonthDate(doy, year); // md = Month & date.
    month = md / 100;
    date = md - (month * 100);
    serial_num = break_str(pos, on, nic);
    check_dig = break_str(pos + on, 0, nic);

    printf("Gender          = %c\n", gender);
    printf("Birth year      = %d\n", year);
    printf("Birth month     = %d : %s\n", month, monthname(month));
    printf("Birth date      = %d\n", date);
    printf("Serial number   = %d\n", serial_num);
    printf("Check digit     = %d\n", check_dig);
    if (on == 3)
    {
        printf("Special letter  = %c\n", special_letter);
    }

    return 0;
}