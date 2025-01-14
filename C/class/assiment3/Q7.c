#include<stdio.h>
void max(int x,int y){
    if(x>y) printf("Max: %d",x);
    else printf("Max: %d",y);
    return ;
}
void min(int x,int y){
    if(x<y) printf("\nMin: %d",x);
    else    printf("\nMin: %d",y);
    return ;
}
void main(){
    int a,b;
    printf("Enter two Numbers: ");
    scanf("%d%d",&a,&b);
    max(a,b);
    min(a,b);
}