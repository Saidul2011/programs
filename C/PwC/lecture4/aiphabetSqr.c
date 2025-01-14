#include<stdio.h>
void main(){
    int n; 
    printf("Enter the number of rows ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        int a=65;
        for(int j=1;j<=n;j++){
            printf(" %c",a);
            a++;
        }
        printf("\n");
    }
    
    
}