#include<stdio.h>
int main(){
    int n;
    int a=1;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            printf("%3d",a);
            a++;
        }
    printf("\n");
    }
    return 0;
}