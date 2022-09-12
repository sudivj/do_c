#include <stdio.h>

typedef enum{ F,T } boolean;

int main()
{
    int num;
    boolean bool1 = F;
    while (bool1)
    {
        ++num;
        if (num == 30)
        {
            bool1 = T;
        }        
        printf("got it");
    }
    
}