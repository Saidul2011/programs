#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node {
    char data;
    struct node* link;
}*top=NULL;

int isEmpty(){
    if(top==NULL) return 1;
    else return 0;
}

void push(char data){
    struct node *newNode;
    newNode=malloc(sizeof(newNode));

    if(newNode == NULL){
        printf("Stack is Overflow");;
        exit(1);
    }

    newNode->data=data;
    newNode->link=top;
    top=newNode;
}

char pop(){
    if(isEmpty()){
        printf("Stack is Underflow");
        exit(1);
    }

    else{
        struct node *temp=top;
        char val=temp->data;
        top=top->link;

        free(temp);
        temp=NULL;

        return val;
    }
}

int match_char(char a, char b){
    if(a=='[' && b==']') return 1;
    if(a=='{' && b=='}') return 1;
    if(a=='(' && b==')') return 1;
    return 0;
}

int brackets_check(char *s){
    int i=0;
    char temp;
    for(i=0; i< strlen(s); i++)
    {
        if(s[i]=='(' || s[i]=='{' || s[i]=='['){
            push(s[i]);
        }
        if (s[i]==')' || s[i]=='}' || s[i]==']')
        {
            if (isEmpty())
            {
                printf("Right Brackets are more than the left.\n");
                return 0;
            }
            else{
                temp=pop();
                if(!match_char(temp,s[i])){
                    printf("Mismatched brackets.\n");
                    return 0;
                }
            }
        }

    }


    if (isEmpty())
    {
        printf("Brackets are well balanced.\n");
        return 1;
    }
    else{ 
        printf("Left brackets are more  than the right.\n");
        return 0;
    }
}


int main(){
    char s[100];
    int check;
    printf("Enter the expretion:");
    gets(s);
    check=brackets_check(s);
    if(check==1) printf("Valid Expretion");
    else printf("Invalid Expretion!");
    
    return 0;
}