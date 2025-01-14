#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100  
#define NUM_STACKS 3  


typedef struct {
    int top[NUM_STACKS];     
    int stack_array[MAX_SIZE]; 
    int stack_boundary[NUM_STACKS + 1]; 
} MultiStack;


void initializeStacks(MultiStack *ms) {
    int partition_size = MAX_SIZE / NUM_STACKS; 
    for (int i = 0; i < NUM_STACKS; i++) {
        ms->top[i] = (i * partition_size) - 1;   
        ms->stack_boundary[i] = i * partition_size; 
    }
    ms->stack_boundary[NUM_STACKS] = MAX_SIZE; 
}


void push(MultiStack *ms, int stack_num, int value) {
    if (stack_num < 0 || stack_num >= NUM_STACKS) {
        printf("Invalid stack number!\n");
        return;
    }

    
    if (ms->top[stack_num] >= ms->stack_boundary[stack_num + 1] - 1) {
        printf("Stack %d is full! Cannot push %d.\n", stack_num, value);
        return;
    }

    
    ms->top[stack_num]++;
    ms->stack_array[ms->top[stack_num]] = value;
    printf("Pushed %d onto stack %d\n", value, stack_num);
}


int pop(MultiStack *ms, int stack_num) {
    if (stack_num < 0 || stack_num >= NUM_STACKS) {
        printf("Invalid stack number!\n");
        return -1;
    }

    
    if (ms->top[stack_num] < ms->stack_boundary[stack_num]) {
        printf("Stack %d is empty! Cannot pop.\n", stack_num);
        return -1;
    }

    
    int popped_value = ms->stack_array[ms->top[stack_num]];
    ms->top[stack_num]--;
    printf("Popped %d from stack %d\n", popped_value, stack_num);
    return popped_value;
}


void displayStack(MultiStack *ms, int stack_num) {
    if (stack_num < 0 || stack_num >= NUM_STACKS) {
        printf("Invalid stack number!\n");
        return;
    }

    if (ms->top[stack_num] < ms->stack_boundary[stack_num]) {
        printf("Stack %d is empty.\n", stack_num);
        return;
    }

    printf("Stack %d elements: ", stack_num);
    for (int i = ms->stack_boundary[stack_num]; i <= ms->top[stack_num]; i++) {
        printf("%d ", ms->stack_array[i]);
    }
    printf("\n");
}


int main() {
    MultiStack ms;
    initializeStacks(&ms);

    int choice, stack_num, value;

    while (1) {
        printf("\n1. Push\n2. Pop\n3. Display Stack\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter stack number (0 to %d): ", NUM_STACKS - 1);
                scanf("%d", &stack_num);
                printf("Enter value to push: ");
                scanf("%d", &value);
                push(&ms, stack_num, value);
                break;
            case 2:
                printf("Enter stack number (0 to %d): ", NUM_STACKS - 1);
                scanf("%d", &stack_num);
                pop(&ms, stack_num);
                break;
            case 3:
                printf("Enter stack number (0 to %d): ", NUM_STACKS - 1);
                scanf("%d", &stack_num);
                displayStack(&ms, stack_num);
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}