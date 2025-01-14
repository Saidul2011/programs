#include<stdio.h>
int fibonacci(int n){
    if( n==1) return 0;
    if( n==2) return 1;
    return fibonacci(n-1)+fibonacci(n-2);
}
void main(){
    int n;
    printf("Enter number of turms: ");
    scanf("%d",&n);
    for (size_t i = 1; i <=n; i++)
    {
        printf("%d ", fibonacci(i));
    }
    
}