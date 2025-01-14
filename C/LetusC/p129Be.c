#include<stdio.h>
void main(){
    int n,a,b,c;
    for(int i=0;i<=500;i++){
        n=i;
        c=n%10;
        n=n/10;
        b=n%10;
        a=n/10;
        if(i==((a*a*a)+(b*b*b)+(c*c*c))){
        printf("%d\n",i);
        }
    }
}