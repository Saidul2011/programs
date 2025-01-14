#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define size 4

int que[size];
int fornt =-1;
int rear =-1;
int isFull(){
    return (rear+1)%size==fornt;
}

int isEmpty(){
    return  (rear==-1 || fornt==-1);
}

void insert();
void delete();
void display();

void main(){
    int ch;
    while(1){
        printf("-------------------------------------\n");
        printf("\n1. Insert\n2. Delete\n3. Display\n4. Quite\nEmter your choice :");
        scanf("%d",&ch);
        system("cls");
        switch(ch){
            case 1: insert(); break;
            case 2: delete(); break;
            case 3: display(); break;
            case 4: exit(1);
            default: printf("Invalid choice ! Try again.\n");
        }
    }
}

void insert(){
    if(isFull()){
        printf("Queue is Full !\n");
        return;
    }
    else{
        int data;
        printf("Enter the data :");
        scanf("%d",&data);
        rear=(rear+1)%size;
        if(fornt==-1) fornt=0;  //for first insert
        que[rear]=data;
    }
}

void delete(){
    int item;
    if(isEmpty()){
        printf("Queue is Empty !\n");
        return;
    }
    else{
        item=que[fornt];
        printf("Deleted element is : %d\n",item);
        if(rear==fornt){ rear=-1, fornt=-1;}
        else fornt=(fornt+1)%size;
    }
}

void display(){
    if(isEmpty()){
        printf("No element in Queuue !\n");
        return;
    }
    else{
        printf("All elements are : ");
        int i=fornt;
        do
        {
            printf("%d ",que[i]);
            i=(i+1)%size;
        } while (i!=(rear+1)%size);
        
        printf("\n");
    }
}