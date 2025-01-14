#include<stdio.h>
void main(){
    typedef struct data{
        char name[40];
        char stream[10];
        int roll;
    } data;
    data student1;
    strcpy(student1.name,"Akib");
    strcpy(student1.stream,"ECE");
    student1.roll=12;

    data student2;
    strcpy(student2.name,"Rohan");
    strcpy(student2.stream,"CSE");
    student2.roll=12;

    data student3;
    strcpy(student3.name,"Saidul");
    strcpy(student3.stream,"IT");
    student3.roll=12;

    printf("%s",student1.name);
    printf("%s",student1.name);
    printf("%s",student1.name);

    printf("%s",student1.name);

    
}