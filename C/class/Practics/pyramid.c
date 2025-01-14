#include<stdio.h>
int main(){
    int n;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        for(int j=i; j<=n-1; j++){
            printf(" ");
        }
        for(int k=1; k<=(i*2)-1; k++){
            printf("*");
        }
    printf("\n");
    }
    return 0;
}