#include <stdio.h>

int main() {
    // Q) Take three positive integers input and print 
    //    the greatest.
    int big, a, b, c;
    printf("Enter three numbers: ");  // Added semicolon and space
    scanf("%d%d%d", &a, &b, &c);
    big = (a > b ? (a > c ? a : c) : (b > c ? b : c));
    printf("The greatest number is: %d\n", big);  // Added newline character

    return 0;
}
