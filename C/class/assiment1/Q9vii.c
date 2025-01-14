#include<stdio.h>
void main(){
    int n;
    printf("Enter the Number of line:");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {   
        for (int j = 1; j<= i; j++)
        {
           printf("%3d",j);
        }
        for (int k = i-1; k >=1; k--)
        {
            printf("%3d",k);
        }
        
        printf("\n");
    }
}