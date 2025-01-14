#include<stdio.h>
void main(){
    int count=0;
    for(int i=0;i<=9;i++)
    {
        for(int j=0;j<=9;j++)
    {
        for(int k=0;k<=9;k++)
    {
        if(j!=i && k!=i && j!=k)
        {
            printf("%d%d%d ",i,j,k);
            count++;
        }
    }
    }
    }
    printf("\nTotal ways: %d",count);
}