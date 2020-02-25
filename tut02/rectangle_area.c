// Compute area of a rectangle using ints
// Modified 3/3/2017 by Andrew Taylor (andrewt@unsw.edu.au)
// as a lab example for COMP1511

// Note this program doesn't check whether
// the two scanf calls successfully read a number.
// This is covered later in the course.

#include <stdio.h>

int main(void) {
    int length, width, area;

    printf("Please enter rectangle length: ");
    scanf("%d", &length);
    printf("Please enter rectangle width: ");
    scanf("%d", &width);

    area = length * width;

    printf("Area = %d\n", area);

    return 0;
}