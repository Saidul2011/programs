#include <stdio.h>

void printPermutations(int digits[], int n, int k) {
    int i, j, x;
    int count=0;
    // Nested loops for generating permutations
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            for (x = 0; x < n; x++) {
                    printf("%d%d%d  ", digits[i], digits[j], digits[x]);

                    count++;
                }
            }
        }
        printf("\nNumber of posible: %d",count);
    }

int main() {
    // Define the set of digits (0 to 9)
    int digits[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(digits) / sizeof(digits[0]);

    // Generate and print all permutations of 4 digits
    printPermutations(digits, n, 3);
    return 0;
}
