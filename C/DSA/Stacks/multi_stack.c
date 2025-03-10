#include<stdio.h>
#include<stdlib.h>
#define  MAX_SIZE 9
#define NUM_STACK 3

int stack_array[MAX_SIZE];
int top[NUM_STACK];
int boundary[NUM_STACK+1];


void push(){
    int stack_num;
    printf("Enter the stack no. : ");
    scanf("%d",&stack_num);
    if(stack_num < 0 || stack_num >=NUM_STACK)
        printf("Invalid stack number !\n");
    else if(top[stack_num] = boundary[stack_num + 1]--){
        printf("Stack %d is Full!\n",stack_num);
    }
    else{
        int item;
        printf("Enter the item : ");
        scanf("%d",&item);
        top[stack_num]++;
        stack_array[top[stack_num]]=item;
        printf("Pushed %d onto stack %d.\n",item,stack_num);
    }
}

void pop(){
    int stack_num;
    printf("Enter the stack number : ");
    scanf("%d",&stack_num);
    if(stack_num < 0 || stack_num >=NUM_STACK)
        printf("Invalid stack number !\n");
    else if(top[stack_num]< boundary[stack_num])
        printf("Stack %d is Empty!\n",stack_num);
    else{
        int value=stack_array[top[stack_num]];
        printf("Popped %d from stack %d\n",value,stack_num);
        top[stack_num]--;
    }
    
}

void display(){
    int stack_num;
    printf("Enter the stack number : ");
    scanf("%d",&stack_num);
    if(stack_num < 0 || stack_num >=NUM_STACK)
        printf("Invalid stack number !\n");
    else if(top[stack_num]< boundary[stack_num])
        printf("Stack %d is Empty!\n",stack_num);
    else{
        int i =boundary[stack_num];
        printf("Stack %d elements :",stack_num);
        for(i; i<=top[stack_num]; i++){
            printf("%d ",stack_array[i]);
        }
        printf("\n");
    }  
}

int main(){
    int i;
    for(i=0; i<NUM_STACK; i++){
    top[i]=(MAX_SIZE/NUM_STACK * i)-1;
    boundary[i]=MAX_SIZE/NUM_STACK * i;
    }

    boundary[i]=MAX_SIZE;

    int ch;
    while(1){
        printf("1. Push\n2. Pop\n3. Display\n4. Quit\n");
        printf("Enter your choice: ");
        scanf("%d",&ch);
        switch(ch){
            case 1: push(); break;
            case 2: pop(); break;
            case 3: display(); break;
            case 4: exit(1);
            default: printf("Invalid choice!\n");
        }
    }
    return 0;
}
                                                                    


                                                                                      