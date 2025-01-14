#include<stdio.h>
void main(){
    int n;
    printf("Enter number of rows ");
    scanf("%d",&n);
    int nsp=n-1;
    for(int i=1;i<=n;i++){
        
        for(int j=1; j<=nsp;j++){
            printf(" ");
        }
        nsp--;
        for(int j=1; j<=i;j++){
            printf("%d",j);
        }
        int a=i-1;
        for(int k=1; k<=i-1;k++){
        printf("%d",a);
        a--;
        }
        printf("\n");
    }
    
}