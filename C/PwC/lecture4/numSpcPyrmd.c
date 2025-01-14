#include<stdio.h>
void main(){
    int n;
    printf("Enter number of rows ");
    scanf("%d",&n);
    int nst=n; 
    int nsp=1;
    for(int i=1;i<=2*n+1;i++){
        printf(" %d",i);
    }
        printf("\n");
    for(int i=1; i<=n;i++){
        int a=1;
        for(int j=1;j<=nst;j++){
            
            printf(" %d",a); 
            a++;
        }
            
        for(int k=1;k<=nsp;k++){
            printf("  ");
              a++;
        }
            nsp=nsp+2;
        for(int j=1;j<=nst;j++){
            printf(" %d",a);
            a++;
        }
            nst=nst-1;
            printf("\n");
    }
            
}