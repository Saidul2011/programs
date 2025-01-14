#include<stdio.h>
int main(){
    int row,column;
    printf("Enter hte number of rows:");
    scanf("%d",&row);
    printf("Enter hte number of column:");
    scanf("%d",&column);
    int arr[row][column];
    for (int  i = 0; i < row; i++)
    {
        for(int j = 0; j < column; j++)
        {
            scanf("%d",&arr[i][j]);
        }
        
    }
    printf("The matrix is:\n");
    for (int  i = 0; i < row; i++)
    {
        for(int j = 0; j < column; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
        
    }
    return 0;
}