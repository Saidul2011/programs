#include<stdio.h>
void main(){
    int n;
    printf("Enter the Number of line:");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    { 
        for (int j = 1; j<= i; j++)
        {
           printf("%c ",j+64);
        }
        printf("\n");
    }
}