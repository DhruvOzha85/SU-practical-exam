// 5. create struct student with fields: id, name, marks[3] ----input and print details of one student.

#include<stdio.h>

struct student {
    int ID;
    char name[10];
    float marks;
};


int main(){

    struct student s;

    printf("ID: \n");
    scanf("%d", &s.ID);

    printf("Name: \n");
    scanf("%s", s.name[10]);

    printf("Marks: \n");
    scanf("%f", s.marks);


    printf("ID: %d", s.ID);
    printf("Name: %s", s.name[10]);
    printf("Marks: %f", s.marks);


    return 0;
}