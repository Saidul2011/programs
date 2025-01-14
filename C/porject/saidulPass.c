#include <stdio.h>

void printPermutations(char str[], int n, int k) {
    int i, j, x,y,w,z;

    // Nested loops for generating permutations
    for (i = 0; i < n; i++) {
        for (j = i+1; j <n; j++) {
            for (x = j+1; x < n; x++) {
                for (y = x+1; y < n; y++) {
                     for (w = y+1; w < n; w++) {
                         for (z = w+1; z < n; z++) {
                
                            printf("%c%c%c%c%c%c ", str[i], str[j], str[x], str[y], str[w],str[z]);
                        }
                    }
                }
            }  
        }
    }
}
int main() {
    // Define the set of str (0 to 9)
    char str[6] ="SAIDUL";
    int n = sizeof(str) / sizeof(str[0]);

    // Generate and print all permutations of 4 str
    printPermutations(str, n, 6);
    return 0;
}
