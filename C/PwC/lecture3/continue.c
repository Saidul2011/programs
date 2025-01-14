#include<stdio.h>
int main()
{//print all odd number
    for(int i=1; i<=100; i++)
    {
        if(i%2==0)
        {
        continue;
        }
    printf("%d ",i);
    }
    return 0;
}