# Week 7 tutorial 07 (Week 6 was quiet week)

## Assignment 1

1. How did everyone go?
2. If you could go back and tell your past self on thing, what would it be?

## Characters

1. What is a `char`?

1. How do you initialise a character?

1. How large is a character in memory?

1. How do you see a list of all the characters on the lab machines? (Talk about -ve numbers)

## Input

### getchar

1. How does `getchar` signal that it has reached the end of input?

2. Why does `getchar` return an integer when a character is of type `char`?

### fgets

1. How does `fgets` signal that it has reached the end of input?

2. Where does fgets store what it reads in?

3. What is stored at the end when you use fgets?

### fgets vs getchar

What is the difference between fgets and getchar? How do they differ?

## Code Time

What does the following do?

```c
int secret_function(char *word) {
    int i = 0;
    int result = 0;

    while (word[i] != '\0') {

        if(word[i] >= 'a' && word[i] <= 'z') {
            result++;
        }

        i++;
    }

    return result;
}
```

Explain the while loop condition. What is `'\0'` and when will the while loop stop?

What is a `char *word`? How long is it?

What is different between a pointer and an array?

## Structs

What is a struct?

What is different between a struct and an array?

Where would you use a struct and where would you use an array?

How do you access the elements in a struct?

What about if you have a pointer to a struct? How do you access the elements then?
