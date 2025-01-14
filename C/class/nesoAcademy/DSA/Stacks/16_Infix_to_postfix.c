#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100
char stack[MAX];
char infix[MAX];
char postfix[MAX];
int top = -1;

int isEmpty();
int isFull();
void push(char );
char pop();
void inTopost();
int precedence(char );

int main(){
    printf("Enter the infix expression : ");
    gets(infix);
    
    inTopost();

    puts(postfix);

    return 0;
}

void inTopost(){
    int i, j=0;
    char symbol,next;
    for ( i = 0; i < strlen(infix); i++)
    {
        symbol=infix[i];

        switch(symbol){
            case '(':
                push(symbol);
                break;
            case ')':
                while((next=pop()) != '(')
                    postfix[j++]= next ;
                break;

            case '+':
            case '-':
            case '*':
            case '/':
            case '^':
                while(!isEmpty() && precedence(stack[top]) >= precedence(symbol))
                    postfix[j++]=pop();
                push(symbol);
                break;
            default:
                postfix[j++]=symbol;

        }
    }
    while(!isEmpty())
        postfix[j++]=pop();
    postfix[j]='\0';

return ;
}

int precedence(char symbol)
{
    switch(symbol){
        case '^':
            return 3;
        case '/':
        case '*':
            return 2;
        case '+':
        case '-':
            return 1;
        default:
            return 0;
    }
}

int isEmpty(){
    if(top == -1) return 1;
    else return 0;
}

int isFull(){
    if(top == MAX-1) return 1;
    else return 0;
}

void  push(char data){
    if(isFull()){
        printf("Stack is Overflow !");
        return;
    }
    top++;
    stack[top]=data;

    return ;
}


char pop(){
    int data;
    if(isEmpty()) {
        printf("Stack is  Underflow !");
        exit(1);
    }
    data=stack[top];
    top--;
    return data;
}