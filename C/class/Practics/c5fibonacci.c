#include<stdio.h>
void main(){
    int n;
    int a=0,b=1;
    printf("Enter the number of turm ");
    scanf("%d",&n);
    printf("%d %d ",a,b);
    for(int i=1;i<=n-2;i++){
        int s=a+b;
        printf("%d ",s);
        a=b;
        b=s;
    }

}