#include<stdio.h>
void main(){
    int a,b,c;
    int n;
    printf("Enter the last number :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int t=i;
        c=t%10;
        t=t/10;
        b=t%10;
        t=t/10;
        a=t;
        if (i==((a*a*a)+(b*b*b)+(c*c*c)))
        {
            printf("%d ",i);
        }
        
    }
}