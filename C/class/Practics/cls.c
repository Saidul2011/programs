#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int n;
void display(void);

void main(){
    n=1;
    printf("Hello");
    display();
    getch();
    system("cls");
    n=2;
    display();
    getch();
}

void display(){
    if(n==1) printf("SAIDUL\n");
    else printf("AKIB\n");
}