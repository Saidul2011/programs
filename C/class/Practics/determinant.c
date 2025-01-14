#include<stdio.h>
void main(){
    int m,n;
    printf("Enter order of matrix : ");
    scanf("%d%d",&m,&n);
    int arr[m][n];
    for (size_t i = 0; i < m; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            scanf("%d",&arr[i][j]);
        }
        
    }
    
}