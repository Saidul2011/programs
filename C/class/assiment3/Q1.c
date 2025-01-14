#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    // Get operator and operands from user
    printf("Enter Numbers : ");
    scanf("%lf",&num1);
    //printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);
    scanf("%lf",&num2);
    // printf("Enter two operands: ");
    // scanf("%lf %lf", &num1, &num2);

    // Perform calculation based on the operator
    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            // Check for division by zero
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                printf("Error: Division by zero is undefined.\n");
                return 1;  // Exit with an error code
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
            return 1;  // Exit with an error code
    }

    // Display the result
    printf("Result: %.2lf %c %.2lf = %.2lf\n", num1, operator, num2, result);

    return 0;  // Exit successfully
}
