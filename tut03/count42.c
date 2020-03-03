// Print the integers 1..42, one per line.
// COMP1511 tutorial example
// Andrew Taylor - andrewt@unsw.edu.au

#include <stdio.h>

int main(void) {
    int i;
    
    i = 1;
    while (i <= 42) {
        printf("%d\n", i);
        i = i + 1;
    }
    
    return 0;
}