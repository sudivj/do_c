#include <stdio.h>
#include <string.h>

int monthd(int year,int Month) {

    int result, Monthdays[] = {1,2,1,0,1,0,1,1,0,1,0,1};         
    int leap = year % 4;
    

    if(Month == 2 ){
        if (leap == 0)
        {
            result = 29;
        }
        if (leap > 0)
        {
            result = 28;
        }        
        
    }
    int day = 1;
    if (Monthdays[Month - 1] == day)
    {
        result = 31;
    }
    day = 0;
    if(Monthdays[Month - 1] == day)
    {
        result = 30;
    }
       

    return result;

}
    
    
