#include<stdio.h>
#include<stdlib.h>

struct  node {
    int data;
    struct  node  *link;
}*top=NULL;

int isEmpty(){
    if(top== NULL) return 1;
    else return 0;
}

void push(int data){
    struct node *newNode;
    newNode = malloc(sizeof(struct node));
    if(newNode == NULL){  // malloc() return NULL when the requested memory can't be allocated.
        printf("Stack overflow.");
        exit(1);
    }
    newNode->data=data;
    newNode->link = NULL;

    newNode->link = top;
    top= newNode; 
}

int pop(){
    if(isEmpty()){
        printf("Stack is Underflow!");
        exit(1);
    }
    else {    
        struct node *temp=top;
        int value=temp->data;
        top=top->link;

        free(temp);
        temp=NULL;

        return value;
    }
}

void palindrome_check(char *s){
    int i=0;
    while(s[i] != 'x'){
        push(s[i]);
        i++;
    }
    i++;
    while(s[i]){
        if(isEmpty() || s[i] != pop()){
            printf("Not a Palindrome");
            exit(1);
        }
        i++;
    }
    printf("Palindrome.");
}

void main(){
    char s[100];
    printf("Please enter the string : ");
    scanf("%s", s);

    palindrome_check(s);
}