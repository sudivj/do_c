#include <stdio.h>
#include <string.h>

int main() {

    int Monthdays[] = {1,2,1,0,1,0,1,1,0,1,0,1};         
    int days, MinD,leap,year;
    
    
    printf("Enter Month in numbers: ");
    scanf("%d", &MinD);
    if(MinD == 2)
    {
        printf("Enter year: ");
        scanf("%d", &year);
        
    }
    leap = year % 4;   

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
       

    printf("%d", days);

    return 0;

}
    
    
