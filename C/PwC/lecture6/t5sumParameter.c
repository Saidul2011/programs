#include<stdio.h>
void sum(int add, int n){
    if(n==0){
        printf("%d\n",add);
     return;
    }
    sum(add+n,n-1);
    
    return;
}
int main(){
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    sum(0,n);
    return 0;
}