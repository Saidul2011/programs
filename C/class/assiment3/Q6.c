#include <stdio.h>

// Function to reverse the digits of the number using recursion
void reverseNumber(int num) {
    // Base case: if the number is 0, return
    if (num == 0) {
        return;
    }
    
    // Print the last digit of the number
    printf("%d", num % 10);
    
    // Recursive call with the number excluding the last digit
    reverseNumber(num / 10);
}

int main() {
    int number;
    
    // Read an integer from the user
    printf("Enter an integer: ");
    scanf("%d", &number);
    
    // If the number is negative, print the minus sign and make the number positive
    if (number < 0) {
        printf("-");
        number = -number;
    }
    
    printf("Reversed number: ");
    
    // Call the recursive function to print the reversed number
    reverseNumber(number);
    
    printf("\n");
    
    return 0;
}