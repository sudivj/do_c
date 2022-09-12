#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <ncurses.h>
#include "Colors.h"

int width, height, drawing;
int score = 0;
int x = 1, fruitx;
int y = 1, fruity;
int gameover = 0;
int mode;

void dimensions()
{
    int pass = 0;
    reset();
    printf("Enter width: ");
    scanf("%d", &width);
    printf("Enter width: ");
    scanf("%d", &height);
    printf("Enter mode(Easy = 1 || Hard = 2): ");
    scanf("%d", &mode);
    pass = 1;
    if (pass == 1)
    {
        if (mode != 1 && mode != 2)
        {
            printf("Error! Run the code again");
            exit(0);
        }
        else if (width > 50)
        {
            printf("Error! Enter a value < 50 for width");
            exit(0);
        }
        else if (height > 45)
        {
            printf("Error! Enter a value < 45 for height");
            exit(0);
        }
    }
}
void curses()
{
    initscr();
    cbreak();
    noecho();
    scrollok(stdscr, TRUE);
    nodelay(stdscr, TRUE);
}
void placefruit()
{
    int frx = width - 2;
    int fry = height - 2;
    fruitx = rand() % frx;
    fruitx = fruitx + 1;
    fruity = rand() % fry;
    fruity = fruity + 1;
    while (1)
    {
        if (x == fruitx && y == fruity)
        {
            fruitx = rand() % frx;
            fruitx = fruitx + 1;
            fruity = rand() % fry;
            fruity = fruity + 1;
        }
        else
        {
            break;
        }
    }
}
void render(int x, int y)
{
    system("clear");
    if (mode == 2)
    {
        printf("\rYou die when you collide on walls");
        printf("\n\n\r");
    }
    for (int i1 = 0; i1 < height + 2; i1++)
    {
        for (int i = 0; i < width + 2; i++)
        {
            if (i == 0 || i == (width + 2) - 1 || i1 == 0 || i1 == (height + 2) - 1)
            {
                red();
                printf("#");
            }
            else if (i == x && i1 == y)
            {
                yellow();
                printf("0");
            }
            else if (i == fruitx && i1 == fruity)
            {
                green();
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n\r");
    }
    cyan();
    printf("width = %d , height = %d \n\rScore = %d", x, y, score);
}
void kill()
{
    if (x < 1 || x > width || y < 1 || y > height)
    {
        gameover = 1;
    }
}
void logic()
{
    switch (getch())
    {
    case 'a':
    case 68:
        if (mode == 1)
        {
            if (x > 1)
            {
                x--;
                drawing = 1;
                render(x, y);
            }
        }
        if (mode == 2)
        {
            x--;
            render(x, y);
            kill();
        }

        break;
    case 'd':
    case 67:
        if (mode == 1)
        {
            if (x < width)
            {
                x++;
                drawing = 1;
                render(x, y);
            }
        }
        if (mode == 2)
        {
            x++;
            render(x, y);
            kill();
        }

        break;
    case 'w':
    case 65:
        if (mode == 1)
        {
            if (y > 1)
            {
                y--;
                drawing = 1;
                render(x, y);
            }
        }
        if (mode == 2)
        {
            y--;
            render(x, y);
            kill();
        }

        break;
    case 's':
    case 66:
        if (mode == 1)
        {
            if (y < height)
            {
                y++;
                drawing = 1;
                render(x, y);
            }
        }
        if (mode == 2)
        {
            y++;
            render(x, y);
            kill();
        }

        break;
    case 'x':
        gameover = 1;
        break;

    default:
        drawing = 0;
        break;
    }
    kill();
}

int main(void)
{
    fflush(stdout);
    dimensions();
    placefruit();
    curses();
    logic();
    render(x, y);
    while (gameover != 1)
    {
        logic();
        if (x == fruitx && y == fruity)
        {
            score++;
            placefruit();
            fflush(stdout);
            system("clear");
            render(x, y);
        }
        fflush(stdout);
    }
    endwin();
    printf("\n\rYou ran into a wall!\n\n\r____Score  =  %d____", score);

    return 0;
}
