#include <stdio.h>

void calcSum(int a, int b, int * sum);

int main(void) {

    int a = 5;
    int b = 6;
    int sumResult;
    
    calcSum(a, b, &sumResult);
    
    printf("%d\n", sumResult);

    return 0;
}

void calcSum(int a, int b, int *sum) {

    *sum = a + b;

}