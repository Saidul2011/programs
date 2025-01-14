#include<stdio.h>

int main() {
    FILE *f1;
    char c;

    // Open file in write mode and check if it opens successfully
    if ((f1 = fopen("INPUT.txt", "w")) == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    printf("Data Input (Press Ctrl+D to end input on Unix/Linux/Mac, Ctrl+Z on Windows)\n\n");

    while((c = getchar()) != EOF)  // Write to file until EOF
        putc(c, f1);

    fclose(f1);  // Close file after writing

    printf("\nData Output\n\n");

    // Open file in read mode and check if it opens successfully
    if ((f1 = fopen("INPUT.txt", "r")) == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    while((c = getc(f1)) != EOF)  // Read from file until EOF
        printf("%c", c);

    fclose(f1);  // Close file after reading

    printf("\n");  // Add a newline after output for clarity

    return 0;
}
