#include<stdio.h>
void main(){
    int n;
    printf("Enter number of rows ");
    scanf("%d",&n);
    int a=1;
    for(int i=1;i<=n;i++){
        for(int j=1; j<=n-i;j++){
            printf(" ");
        }
        for(int j=1; j<=a;j++){
            printf("*");
        }
        a=a+2;
        printf("\n");
    }
}