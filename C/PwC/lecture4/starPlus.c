#include<stdio.h>
void main(){
    int n;
    printf("Enter number of rows ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        // int a=1;
        for(int j=1; j<=n;j++){
            if(i==(n+1)/2 || j==(n+1)/2) printf("* ");
            else printf("  ");
        }
        printf("\n");
    }
}