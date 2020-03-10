#include <stdio.h>

int main(void) {

    int number;
    int result = scanf("%d", &number);

    printf(result);

    printf("%d", scanf("%d", &number));

    return 0;
}