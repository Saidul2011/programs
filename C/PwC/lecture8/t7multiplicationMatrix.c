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
    int n2;
    printf("Enter the number of rows : ");
    scanf("%d",&n2);
    int m2;
    printf("Enter the number of columns : ");
    scanf("%d",&m2);
    int arr2[n2][m2];
    for(int i=0;i<n2;i++){
        for(int j=0;j<m2;j++){
         scanf("%d",&arr2[i][j]);
        }
    }
    // Matrix Multiplication 
    if(n!=n2) {printf("The matrices can't multiplied.");}
    else {
    int arr3[m][m2];
    for(int i=0;i<m;i++){
        for(int j=0;j<m2;j++){
            arr3[i][j]=0;
            for (int k =0; k<n; k++)
            {
                arr3[i][j]+=arr1[i][k]*arr2[k][j]; 
                // arr3[i][j]= (samition k=0 to k=n ) arr1[i][k]*arr2[k][j]
            }
            
        }
    }
    printf("The Matrix multiplication is:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<m2;j++){
            printf("%4d ",arr3[i][j]);
        }
             printf("\n");
   }
    }
    
}