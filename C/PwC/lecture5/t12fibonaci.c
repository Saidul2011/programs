#include<stdio.h>
int main(){  
    int n=8;
     int a=1;
     int b=2;
         printf("%d ",a);
         printf("%d ",b);
    for(int i=3;i<=n;i++){
        int c=a+b;
         printf("%d ",c);
            b=c;
            a=b-a;
            
    }
    return 0;
}