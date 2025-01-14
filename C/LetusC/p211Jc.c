#include <stdio.h>

// Function to calculate the Fibonacci number using recursion
unsigned long long fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n = 25;

    // Print the first 25 Fibonacci numbers
    printf("The first %d numbers of the Fibonacci sequence are:\n", n);
    for (int i = 0; i < n; i++) {
        printf("%llu ", fibonacci(i));
    }
    printf("\n");

    return 0;
}
