#include<stdio.h>
int main(){
    int n,m,n2,m2;
    printf("Enter number of rows for matrix1: ");
    scanf("%d",&n);
    printf("Enter number of columns for matrix1: ");
    scanf("%d",&m);
    printf("Enter the elements of matrix1:\n");
    int arr1[n][m];
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < m; j++)
        {
            scanf("%d",&arr1[i][j]);
        }
        
    }
    printf("Enter number of rows for matrix2: ");
    scanf("%d",&n2);
    printf("Enter number of columns for matrix2: ");
    scanf("%d",&m2);
    printf("Enter the elements of matrix2:\n");
    int arr2[n2][m2];
    for (size_t i = 0; i < n2; i++)
    {
        for (size_t j = 0; j < m2; j++)
        {
            scanf("%d",&arr2[i][j]);
        }
        
    }
    // Multiplication
    if(m!=n2) printf("Invalid order, can't multiply.");
    else {
        int brr[n][m2];
        for (size_t i = 0; i < n; i++)
        {
            for (size_t j = 0; j < m2; j++)
            {
                
                brr[i][j]=0;
                for (size_t k = 0; k < m ; k++)
                {
                    brr[i][j]=brr[i][j] + arr1[i][k]*arr2[i][j];
                }
                
            }
            
        }
        
        
        printf("Multiplication of matrix1 and matrix2 is :\n");
        for (size_t i = 0; i < n2; i++)
        {
            for (size_t j = 0; j < m2; j++)
            {
                printf("%2d", brr[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}