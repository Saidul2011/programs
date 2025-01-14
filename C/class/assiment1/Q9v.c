#include<stdio.h>
void main(){
    int x,n;
    printf("Enter the Number of line:");
    scanf("%d",&x);
    n=2*x;
    for (int i = 1; i <=n; i++)
    {   if(i%2!=0){
        for (int j = 1; j<= i; j++)
        {
           printf("* ");
        }
        printf("\n");
    }
    }
}