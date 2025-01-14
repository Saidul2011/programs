#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define max 100  // Increased buffer size for larger input

char infix[max];
char postfix[max];
char stack[max];
float numstk[max];
int top = -1;
int t = -1;
int i = 0;
int j = 0;

int isEmpty() {
    return top == -1;
}

int isFull() {
    return top >= max - 1;
}

void push(char opr) {
    if (isFull()) {
        printf("Stack is Full!\n");
        exit(1);
    }
    stack[++top] = opr;
}

char pop() {
    if (isEmpty()) {
        printf("Stack is Empty!\n");
        exit(1);
    }
    return stack[top--];
}

int prec(char opr) {
    switch (opr) {
        case '+':
        case '-': return 1;
        case '*':
        case '/': return 2;
        case '^': return 3;
        default: return 0;
    }
}

void inTpost() {
    char smb, next;
    while (infix[i] != '\0') {
        smb = infix[i];
        if (smb >= '0' && smb <= '9') {
            // If it's a number, add it to postfix
            while (infix[i] >= '0' && infix[i] <= '9' || infix[i] == '.') {
                postfix[j++] = infix[i++];
            }
            postfix[j++] = ' ';  // Separate numbers with a space
            i--; // Step back to process next character
        } else if (smb == '(') {
            push(smb);
        } else if (smb == ')') {
            while ((next = pop()) != '(') {
                postfix[j++] = next;
                postfix[j++] = ' ';
            }
        } else if (prec(smb) > 0) {
            while (!isEmpty() && prec(smb) <= prec(stack[top])) {
                postfix[j++] = pop();
                postfix[j++] = ' ';
            }
            push(smb);
        } else {
            printf("Invalid character in expression: %c\n", smb);
            exit(1);
        }
        i++;
    }

    while (!isEmpty()) {
        postfix[j++] = pop();
        postfix[j++] = ' ';
    }
    postfix[j] = '\0';
}

float post_elv() {
    float a, b, num;
    for (i = 0; i < strlen(postfix); i++) {
        if (postfix[i] >= '0' && postfix[i] <= '9') {
            // Parse multi-digit number
            num = 0;
            while (postfix[i] >= '0' && postfix[i] <= '9') {
                num = num * 10 + (postfix[i] - '0');
                i++;
            }
            if (postfix[i] == '.') {  // Handle decimal point
                float factor = 0.1;
                i++;
                while (postfix[i] >= '0' && postfix[i] <= '9') {
                    num += (postfix[i] - '0') * factor;
                    factor /= 10;
                    i++;
                }
            }
            numstk[++t] = num;
        } else if (postfix[i] == '+' || postfix[i] == '-' || postfix[i] == '*' || postfix[i] == '/' || postfix[i] == '^') {
            a = numstk[t--];
            b = numstk[t--];
            switch (postfix[i]) {
                case '+': numstk[++t] = b + a; break;
                case '-': numstk[++t] = b - a; break;
                case '*': numstk[++t] = b * a; break;
                case '/': numstk[++t] = b / a; break;
                case '^': numstk[++t] = pow(b, a); break;
            }
        }
    }
    return numstk[t];
}

int main() {
    printf("Enter the infix expression: ");
    scanf("%[^\n]", infix);  // Read the entire line, including spaces

    inTpost();

    printf("Postfix expression: %s\n", postfix);

    float res = post_elv();

    printf("Result: %.2f\n", res);

    return 0;
}
