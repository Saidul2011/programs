#include <stdio.h>

int main() {
    char operator;
    double result, operand;

    // Get the first operand
    printf("Enter values : ");
    scanf("%lf", &result);

    // Get operators and operands until the user enters '=' to quit
    while (1) {
        // Get operator
       // printf("Enter an operator (+, -, *, /) or '=' to quit: ");
        scanf(" %c", &operator);

        // Check if the user wants to quit
        if (operator == '=') {
            break;
        }

        // Get operand
       // printf("Enter the next operand: ");
        scanf("%lf", &operand);

        // Perform calculation based on the operator
        switch (operator) {
            case '+':
                result += operand;
                break;
            case '-':
                result -= operand;
                break;
            case '*':
                result *= operand;
                break;
            case '/':
                // Check for division by zero
                if (operand != 0) {
                    result /= operand;
                } else {
                    printf("Error: Division by zero is undefined.\n");
                    return 1;  // Exit with an error code
                }
                break;
            default:
                printf("Error: Invalid operator.\n");
                return 1;  // Exit with an error code
        }
    }

    // Display the final result
    printf("Final Result: %.2lf\n", result);

    return 0;  // Exit successfully
}
