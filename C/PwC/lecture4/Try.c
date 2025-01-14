#include<stdio.h>
void main(){
    int n;
    printf("Enter number of rows ");
    scanf("%d",&n);
    int nsp=n-1;
    for(int i=1;i<=n;i++){
        for(int j=1; j<=nsp;j++){
            printf("  ");
        }
        nsp--;
        for(int j=1; j<=i;j++){
            printf("* ");
        }
        int a=i-1;
        for(int k=1;k<=a;k++){
            printf("* ");
        }
        printf("\n");
    }
    int nsp1=n-1;
    int b=n-2;
    for(int i=1;i<=n-1;i++){
        for(int j=1; j<=i;j++){
            printf("  ");
        }
        for(int j=1; j<=nsp1;j++){
            printf("* ");
        } 
        nsp1--; 
        
        for(int k=1;k<=b;k++){
            printf("* ");
        } 
        b--;
        printf("\n");
    }
}