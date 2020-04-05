# Tutorial 02

## Goals

- Understand if statement logic
- Continue to talk!
- Be better than just Oreos

## If statements

```c

if (condition) {
    doSomething;    
}


if (condition a) {

} else if (condition b) {

} else { // no condition on an else

}

// multiple conditions in one if statement
if (condition a && condition b || condition c) {

}

// changes the order of operation
if ((condition a && condition b) || condition c) {

}
```

<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>

## Question 6

<details>
    <summary>
    1 / 2 * 500
    </summary>
    0
</details>

<br>
<details>
    <summary>
    1 / 2.0 * 500 
    </summary>
    250.0
</details>

<br>
<details>
    <summary>
    (17 / 5) * 5 + (17 % 5)
    </summary>
    17
</details>

<br>
<details>
    <summary>
    (12 - 17) % 6 - 4
    </summary>
    -9 
</details>


<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>


## Printing Multiple Ints in a String

```c
#include <stdio.h>

int main(void) {
    int num1, num2, num3;

    num1 = 1;
    num2 = 2;
    num3 = 3;

    printf("%d plus %d is equal to %d\n", num1, num2, num3);

    return 0;
}
```