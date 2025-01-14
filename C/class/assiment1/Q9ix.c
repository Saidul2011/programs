#include<stdio.h>
void main(){
    int n;
    printf("Enter the Number of line:");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {   if(i%2!=0){
        for (int j = 1; j<= i; j++)
        {
           printf("%3d",j);
        }
        printf("\n");
        }
    }
    for (int k = n-1; k >=1; k--){
        if(k%2!=0){
            for (int m = 1; m<= k; m++)
            {
            printf("%3d",m);
            }
            printf("\n");
        }
    }
}