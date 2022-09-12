#include <stdio.h>
#include <unistd.h>

int main(void) {
    int number = 0;
    char c;
    while (1) {
        ++number;
        printf("\rThe number is now %d.", number);
        fflush(stdout);
        sleep(1);
        
        
    }
    return 0;
}