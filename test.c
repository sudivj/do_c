#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <math.h>
int axis[8][8];

static void arraysetup(int player_x, int player_y)
{
    int randx = rand() % 8;
    int randy = rand() % 8;
    int x = player_x + 4;
    int y = player_y + 4;
    if ((randx + 1) == x && (randy + 1) == y)
    {
        while (1)
        {
            if ((randx + 1) == x && (randy + 1) == y)
            {
                randx = rand() % 8;
                randy = rand() % 8;
            }
            else
            {
                break;
            }
        }
    }

    for (int i = 0; i < 8; i++)
    {
        for (int i1 = 0; i1 < 8; i1++)
        {
            if (i == randx && i1 == randy)
            {
                axis[i + 1][i1 + 1] = 1;
            }
            else
            {
                axis[i + 1][i1 + 1] = 0;
            }
            if (x == i && y == i1)
            {
                axis[i][i1] = 2;
            }

            printf("%d", axis[i + 1][i1 + 1]);
        }
        printf("\n");
    }
}
int main()
{
    int px, py;
    while (1)
    {
        px = rand() % 9 - 4;
        py = rand() % 9 - 4;
        system("clear");
        arraysetup(px, py);
        printf("\n%d : %d\n",px, py);
        sleep(1);
    }
    
}