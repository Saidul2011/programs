#include<stdio.h>
// Addition funtion
int add(int x, int y){
    return x+y;
}
int main(){
    int a,b;
    printf("Enter 1st and 2nd Number ");
    scanf("%d%d",&a,&b);
    int sum= add(a,b);
    printf("\n%d",sum);
}