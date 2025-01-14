#include<stdio.h>
// stair path ways single or duble  or triple steps
int powl(int a,int b){
    if(b==0) return 1;
     int x=powl(a,b/2);
    if(b%2==0)
     return x*x;
    //if(n==3) return 4;
    
    return x*x*a;
}
int main(){
    int a,b;
    printf("Enter numbers ");
    scanf("%d%d",&a,&b);
    printf("%d\n",powl(a,b));
    return 0;
}