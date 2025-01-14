#include<stdio.h>
void main(){
    int m;
    printf("Enter the number of rows : ");
    scanf("%d",&m);
    int n;
    printf("Enter the number of columns : ");
    scanf("%d",&n);

    printf("Enter Matix 1:\n");
     int arr1[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
         scanf("%d",&arr1[i][j]);
        }
    }
    printf("Enter Matix 2:\n");
    int arr2[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
         scanf("%d",&arr2[i][j]);
        }
    }
    // Matrix Adition 
    int arr3[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            arr3[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
    printf("The Matrix adition is:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%4d ",arr3[i][j]);
        }
             printf("\n");
   }
}