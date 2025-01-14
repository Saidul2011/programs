
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

#define size 4

int arr[size];
int fornt=-1;
int rear=-1;

int isFull(){
    return (rear+1)%size==fornt;
}

int isEmpty(){
    return fornt==-1;
}

void ins_fm_rear();
void ins_fm_fornt();
void del_fm_fornt();
void del_fm_rear();
void display();

void main(){
    int ch;
    while(1){
        printf("\n---------------------------\n");
        printf("1. Insert form rear\n2. Insert form fornt\n");
        printf("3. Delete form fornt\n4. Delete form rear\n");
        printf("5. Display All elements\n6. Quite\n");
        printf("Enter your choice : ");
        scanf("%d",&ch);

        system("cls");

        switch(ch){
            case 1: ins_fm_rear(); break;
            case 2: ins_fm_fornt(); break;
            case 3: del_fm_fornt(); break;
            case 4: del_fm_rear(); break;
            case 5: display(); break;
            case 6: exit(1);
            default: printf("Invalid input !\n");
        }
    }
}

void ins_fm_rear(){
    int item;
    if(isFull()){
        printf("Que is Full !\n");
    }
    else{
        printf("Enter item : ");
        scanf("%d",&item);
        rear=(rear+1)%size;
        arr[rear]=item;
        if(fornt==-1) fornt=0;
    }
}

void ins_fm_fornt(){
    int item;
    if(isFull()) printf("Que is Full !\n");
    else{
        if(fornt==0 || fornt==-1) fornt=size-1;
        else fornt--;
        if(rear==-1) rear=size-1;
        printf("Enter item : ");
        scanf("%d",&item);
        arr[fornt]=item;
    }
}

void del_fm_fornt(){
    if(isEmpty()) printf("Que is Empty !\n");
    else{
        printf("%d is deleted from fornt.\n",arr[fornt]);
        if(fornt==rear){
            rear=-1;
            fornt=-1;
        }
        else fornt=(fornt+1)%size;
    }
}

void del_fm_rear(){
    if(isEmpty()) printf("Que is Empty !\n");
    else{
        printf("%d is deleted form rear.\n",arr[rear]);
        if(rear==fornt){
            rear=-1;
            fornt=-1;
        }
        else{
            if(rear==0) rear=size-1;
            else rear--;
        }
    }
}

void display()
{
    int i;
    if(isEmpty()) printf("No element in Que.\n");
    else{
        printf("All elements are : ");
        for(i=fornt; 1; i=(i+1)%size){
            printf("%d ",arr[i]);
            if(i==rear) break;
        }
        printf("\n");
    }
}