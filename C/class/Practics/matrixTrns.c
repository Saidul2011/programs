#include<stdio.h>
void main(){

    int n,m;
    int arr[n][m];
    printf("Enter no. of rows and column : ");
    scanf("%d%d",&n,&m);
    printf("Enter the matrix \n");
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Transpos of matrix is \n");
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            arr[i][j]=arr[j][i];
        }
    }
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
           printf("%d",arr[i][j]);
        }
        printf("\n");
    }

}