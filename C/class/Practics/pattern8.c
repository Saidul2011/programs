#include<stdio.h>
int main(){
    int n;
    printf("Enter number of lines: ");
    scanf("%d",&n);

    for (size_t i = 1; i <= n; i++)
    {
        for (size_t j = 1; j <=(n-i); j++)
        {
            printf("  ");
        }

        for (size_t k = 1; k <= (2*i-1); k++)
        {
            printf("* ");
        }

        printf("\n");
        
    }
    
    return 0;
}