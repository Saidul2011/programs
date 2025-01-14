#include<stdio.h>
int sum(int n){
    if(n==0) return 0;
    int add=n+sum(n-1);
    return add;
}
int main(){
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    int add=sum(n);
    printf("%d\n",add);
    return 0;
}