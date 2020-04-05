#include <stdio.h>

int main(void) {

    int a = 24;

    int *a_ptr = &a;

    printf("a's value is: %d and its address is %p\n", a, a_ptr);

    *a_ptr = 10;

    printf("now its value is: %p", a_ptr);

    return 0;
}