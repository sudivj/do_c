#include <stdio.h>
#include "Monthdays.h"

int main() {
    int year = 2000;
    int days;

    days = monthd(year, 2);

    printf("month = %d", days);

    return 0;    
}