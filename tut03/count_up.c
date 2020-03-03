// Print the integers 1..n, one per line.
// COMP1511 tutorial example
// Andrew Taylor - andrewt@unsw.edu.au
// 25/3/2018

#include <stdio.h>

int main(void) {
    int i, finish;
    
    printf("Enter finish: ");
    scanf("%d", &finish);
    
    i = 1;
    while (i <= finish) {
        printf("%d\n", i);
        i = i + 1;
    }
    
    return 0;
}