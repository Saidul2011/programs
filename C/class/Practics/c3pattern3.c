#include<stdio.h>
void main(){
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=n;j>=i;j--){
            printf("* ");

        }
        printf("\n");
    }
}