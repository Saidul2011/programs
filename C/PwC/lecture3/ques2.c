#include<stdio.h>
int main(){
    // print the table of 19
     for(int i=19; i<=190; i=i+19)
    {
        printf("%d ",i);
    }
    printf("\n");
    int n=19;
    for(int i=1 ; i<=10 ; i++)
    {
        int t=n*i;
        printf("%d * %d = %d\n", n,i,t);
    }

    return 0;
}