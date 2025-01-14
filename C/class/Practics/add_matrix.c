#include<stdio.h>
int main(){
    int arr1[2][3];
    printf("Enter matrix 1 order of 2x3:\n");
    for (size_t i = 0; i < 2; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            scanf("%d",&arr1[i][j]);   
        }
        
    }
    int arr2[2][3];
    printf("Enter matrix 2 order of 2x3:\n");
    for (size_t i = 0; i < 2; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            scanf("%d",&arr2[i][j]);   
        }
        
    }
    // addition
    int brr[2][3];
    for (size_t i = 0; i < 2; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            brr[i][j]=arr1[i][j] + arr2[i][j];
        }
        
    }
    printf("The addition of two given matrices is :\n");
    for (size_t i = 0; i < 2; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            printf("%d ",brr[i][j]);
        }
        printf("\n");
    }
    
    
    return 0;
}