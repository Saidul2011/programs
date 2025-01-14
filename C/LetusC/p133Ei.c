#include<stdio.h>
void main(){
    int n;
    printf("Enter the number ofnlines: ");
    scanf("%d",&n);
    int count=0;
    int space=2*n-2;
    for(int i=1;i<=n;i++){
        for(int k=1;k<=space;k++){
            printf(" ");
        }
        space=space-2;
        for(int j=1;j<=i;j++){
        count++;
        printf("%d   ",count);
    }
    printf("\n");
    }
}