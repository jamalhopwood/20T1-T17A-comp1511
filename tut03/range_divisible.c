// Print multiples of given number between two numbers
// COMP1511 tutorial example
// Andrew Taylor - andrewt@unsw.edu.au

#include <stdio.h>

int main(void) {
    int i, start, finish, divisor;
    
    printf("Enter start: ");
    scanf("%d", &start);
    
    printf("Enter finish: ");
    scanf("%d", &finish);
    
    printf("Enter divisor: ");
    scanf("%d", &divisor);
    
    i = start;
    while (i <= finish) {
        if (i % divisor == 0) {
            printf("%d\n", i);
        }
        i = i + 1;
    }
    
    return 0;
}