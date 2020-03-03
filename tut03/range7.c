// Print multiples of 7 between two numbers
// COMP1511 tutorial example
// Andrew Taylor - andrewt@unsw.edu.au

#include <stdio.h>

int main(void) {
    int i, start, finish;
    
    printf("Enter start: ");
    scanf("%d", &start);
    
    printf("Enter finish: ");
    scanf("%d", &finish);
    
    i = start;
    while (i <= finish) {
        if (i % 7 == 0) {
            printf("%d\n", i);
        }
        i = i + 1;
    }
    
    return 0;
}