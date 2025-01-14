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