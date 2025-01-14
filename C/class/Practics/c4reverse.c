#include <stdio.h>

// Function to reverse the digits of the number
void reverseNumber(int num) {
    if (num == 0) {
        return;
    } else {
        printf("%d", num % 10);
        reverseNumber(num / 10);
    }
}

int main() {
    int num;

    // Input the number from the user
    printf("Enter an integer number: ");
    scanf("%d", &num);

    // Handle negative numbers
    if (num < 0) {
        printf("-");
        num = -num;
    }

    // Print the reverse of the number
    printf("Reverse of the number: ");
    reverseNumber(num);
    printf("\n");

    return 0;
}
