# Tutorial 1

## About me

* My name is Jamal Hopwood
* I'm in my 3rd and last year of Computer Science, I love cooking, cyber security, making leather journels and eating the food I cook.
* j.hopwood@student.unsw.edu.au
* The tutorial notes will all be available at, https://github.com/jamalhopwood/20T1-T17A-comp1511 so you can go back and find everything later in the course

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
<br>
<br>

## The Name Game

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

## Back of the Envelope Question

* You will work in **pairs** to come up with an answer to a question.
* You will have an envelope to do working out on and to write your final answer on.
* After **5 minutes**, I will collect all the envelopes and the winning group will be the one whose answer lies in the **middle** of all the other answers.

<details>
    <summary>
    Question
    </summary>
    How many slices of toast could you fit in this room. Stacked on top of eachother from floor to ceiling and wall to wall.
</details>

## About the Course

- We don't use moodle except for accessing the lecture recordings
  - We use *WEBCMS3*, https://webcms3.cse.unsw.edu.au/
  - WEBCMS3 has a lot of good info like the *style guide*, *course outline*, *tutorial questions*, *lab exercises*
- The forum is the place to go to ask all your questions, you can find a link to the forum on WEBCMS3
  - **Do not** post code on the forum, for plagiarism reasons
  - **Do not** post repeated questions on the forum, make sure to search the forum first for the question you want to ask

### Operating Systems

* Who uses what OS?
* Is anyone multilingual?
* We will be using linux for this course

## Terminal and GUI

- Differences between using the terminal and the GUI

## Code Time

```c
// Basic Hello World program
// Marc Chee, June 2019

#include <stdio.h>

int main (void) {
    printf("Hello World\n");
    return 0;
}
```

What does the '#include <stdio.h>' do?
<details>
    <summary>
    Answer
    </summary>
    This line will import the standard input/output library.
</details>

<br>

What does the '\n' do?
<details>
    <summary>
    Answer
    </summary>
    The '\' character means do something special to the next character.
    <br>
    <br>
    The special version of 'n' is a newline, just like pressing the enter key.
    <br>
    <br>
    So all together, the \n will print the equivalent of the enter button.
    <br>
    <br>
    What would '\\' do?
</details>

<br>

What does a comment do?
<details>
    <summary>
    Answer
    </summary>
    Provides the developer, or someone else reading your code an explanation about what your code is trying to achieve.
    <br>
    <br>
    Why would that be useful?
</details>

<br>

What is indentation and white space and why is it so important?
<details>
    <summary>
    Answer
    </summary>
    Indentation is the gap between the very left of the file and where your text actually starts.
    <br>
    White space is the spaces between brackets, words and numbers.
    <br>
    Without the correct indentation and white space, your code can become very difficult for yourself and others to read.
</details>

## Writing some programs

Write a C program which will behave as follows:

```c
$ ./face0
~ ~
0 0
 o
 -
```

```c
$ ./face0
~ ~
0 0
 o
\_/
```

## Questions

## Lab

**Use default settings**