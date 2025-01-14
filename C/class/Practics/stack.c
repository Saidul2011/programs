#include<stdio.h>
#include<stdlib.h>

#define SIZE 5


void push(int i);
int pop(void);

int *tos ,*p1, stack[SIZE];

int main(){
    int value;

    tos=stack; // tos point to top of the stack
    p1=stack; // initialize p1

    do{
        printf("Enter a value: ");
        scanf("%d",&value);

        if (value!=0) push(value);
        else printf("value on top is : %d\n",pop());

    } while(value!=-1);

    return 0;
}

void push(int i){
    p1++;
    if(p1== (tos+SIZE)){
        printf("Stack Overflow.\n");
        exit(1);
    }
    *p1 = i;
}

int pop(){
    if(p1 == tos ){
        printf("Stack Underflow.\n");
        exit(1);
    }
    p1--;
    return *(p1+1);
}