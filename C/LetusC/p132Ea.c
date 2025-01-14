#include<stdio.h>
void main(){
    int count=0;
    for(int i=1;i<=300;i++)
    {   
        int a=0;
        for(int j=2;j<=i-1;j++)
        {
            if(i%j==0)
            {
                a=1;
                break;
            }
        }
        if(a==0 && i!=1) {
        printf("%1d ",i);
        count++;
        }
    }
    printf("\nTotal %d prime numbers present in between 1-300.",count);
}