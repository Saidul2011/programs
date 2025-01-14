#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of turm: ");
    scanf("%d",&n);
    int a=0, b=1;
    if(n==1) printf("%d ",a);
    else printf("%d %d ",a,b);
    for(int i=1; i<=n-2; i++){
        printf("%d ", a+b);
        int t=a;
        a=b;
        b=t+b;
    }
    
    return 0;
}