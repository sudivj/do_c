#include <stdio.h>
#include <string.h>

int main()
{
    int n1;
    int n2;
    char NIC[] = "77131324V";
    int intNIC[20];
    int current;
    for (int i1 = 0; i1 < strlen(NIC) - 1; i1++)
    {
        current = NIC[i1];
        current = current - 48;
        intNIC[i1] = current;
        // printf("%d",current);
    }
    int result;
    current = NIC[n1];
    for (int i = n1; i < n2; i++)
    {
        current = current * 10;
        current = current + NIC[i];
    }
    result = current;
    printf("%d", result);

    return 0;
}

int monthdate(int day, int year)
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

    // printf("%d",value);
    // printf("%d", count);
    // printf("%d", days);
    result = (count * 100) + days;

    return result;
}