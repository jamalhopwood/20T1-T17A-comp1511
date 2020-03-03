// Print the integer n..m one per line
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
        printf("%d\n", i);
        i = i + 1;
    }
    
    return 0;
}