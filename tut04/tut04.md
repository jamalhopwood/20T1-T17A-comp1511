# Tutorial 04

## Assignment 01

Who has played **minesweeper** before?  

Now I'm going to play mine sweeper for educational purposes not because I like it...

Link: literally type "play minesweeper" into google's search.

What's different between the assignment and the real deal?

How does the **assignment version** store the minefield?

- How do you access the different squares of the minefield
- How would you scan a whole row or column for mines

## Scanf (I don't think you covered this in lectures)

What is the return value of scanf? (If you don't know, how could you find out)

<details>
    <summary>
        Answer
    </summary>
    $ man scanf
</details>

<br>
<br>

```c
int returnResult = scanf("%d", &number)
```

What would we get if we printf this value? (See printScanf.c and run that file to seeee!)

## Arrays

<details>
    <summary>
        What is an array?
    </summary>
        eg. int array[100] = {0};
        
        Would look like:

        [0, 0, 0, 0, 0, 0, 0, ... , 0]

        With length 100
</details>

<br>

What is an index?

 0, 1, 2, 3, 4
[1, 4, 5, 8, 10]

<br>

<details>
    <summary>
        What value is in index 2 of the following array?
        [23, 453, 45, 0]
    </summary>
        45
</details>

<br>
<br>

What about the last index of an array?

<br>

So keeping that in mind, what is wrong with the following?

```c
int pineapples[20];

pineapples[20] = 45;
```

## See last question of tutorial from WebCms3

Coolies

## What is a 2D array and how do we make it and use it?

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

## What is a 3D array and how do we make it and use it?

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

## What is a 4D array and how do we make it and use it?

```c
#include <stdio.h>

int main(void) {

    int dimension = 1;

    printQuestion(dimension);
    
    printf("her");

    return 0;
}

int printQuestion(int dimension) {
    
    if (dimension > 10) return 0;

    printf("What is a %dD array and how do we make it and use it?", dimension);

    printQuestion(dimension + 1);
    
    return 0;
}
```
