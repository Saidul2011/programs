#include <stdio.h>

// Function to find the GCD of two numbers using the Euclidean algorithm
int findGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to find the LCM of two numbers
int findLCM(int a, int b, int gcd) {
    return (a * b) / gcd;
}

int main() {
    int num1, num2, gcd, lcm;
    
    // Input two numbers from the user
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    
    // Calculate GCD
    gcd = findGCD(num1, num2);
    
    // Calculate LCM
    lcm = findLCM(num1, num2, gcd);
    
    // Output the results
    printf("GCD of %d and %d is %d\n", num1, num2, gcd);
    printf("LCM of %d and %d is %d\n", num1, num2, lcm);
    
    return 0;
}
