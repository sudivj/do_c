#include <stdio.h>

int main()
{
    int array[4][4] = {{132} , {123} , {321} , {452}};

    for (int i = 0; i < 4; i++)
    {
        for (int i2 = 0; i2 < 1; i2++)
        {
            printf("%d", array[i][i2]);
        }
        printf("\n");
    }
    
    return 0;
}