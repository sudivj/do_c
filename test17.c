#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <curses.h>

int main(void) {
    int number = 0;
    char c;
    while (keypres != 'x') {
        ++number;
        printf("\rThe number is now %d.", number);
        fflush(stdout);
        sleep(1);        
    }
    printf("\nFinish");
    return 0;
}