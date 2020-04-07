#include <stdio.h>
#include <stdlib.h>

struct class {
    int time;
    char *title;
    struct student *head;
};

struct student {
    int zid;
    char *name;
    double mark;
    struct student *next;
};

typedef struct student *tree;

struct student *createStudent(int id, char *ame, double ark);

int main(int argc, char *argv[]) {

    tree jamal = createStudent(123, "Jamal", 70.5);
    tree leon = createStudent(654, "Leon", 80);

    leon->next = jamal;

    tree saif = createStudent(346, "Saif", 89);

    saif->next = leon;


    struct class *myClass = malloc(sizeof(struct class));
    myClass->time = 17;
    myClass->title = "T17A";
    myClass->head = saif;

    printf("time: %d, title: %s\n", myClass->time, myClass->title); 

    struct student *newStudent = myClass->head;
    while (newStudent != NULL) {
        printf("id: %d, name: %s, mark: %.2lf\n", newStudent->zid, newStudent->name, newStudent->mark);

        newStudent = newStudent->next;
    }

    free(saif);
    free(leon);
    free(jamal);

    return 0;
}

struct student *createStudent(int id, char *ame, double ark) {
    struct student *newStudent = malloc(sizeof(struct student));
    newStudent->zid = id;
    newStudent->name = ame;
    newStudent->mark = ark;
    newStudent->next = NULL;

    return newStudent;
}