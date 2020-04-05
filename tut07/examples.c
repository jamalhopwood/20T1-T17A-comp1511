#include <stdio.h>

int main(void) {

    char variableName = 'a';

    char potato[] = "abcde";

    potato[4] = '_';

    char *x = "this Is My string\0";

    int i = 0
    while (getchar() != EOF) {
        // do something
        i++;
    }

    int x = 9;
    int *ptr = &x;


    int var = getchar();

    int array[6];

    struct human {
        int age;
        char *name;
        double height;
    };

    struct pet{

    };

    struct human person1;

    person1.age = 20;
    person1.name = malloc(6);

    free(person1.name);

    return 0;
}