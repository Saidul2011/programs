#include<stdio.h>
void main(){
    int m;
    printf("Enter the number of rows : ");
    scanf("%d",&m);
    int n;
    printf("Enter the number of columns : ");
    scanf("%d",&n);

    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
         scanf("%d",&arr[i][j]);
        }
    }
    // spiral
    int minr=0;
    int maxr=m-1;
    int minc=0;
    int maxc=n-1;
    int total=m*n;
    int count=0;
    while (count<total)
    {       // print top row
         for(int j=minc;j<=maxc;j++){
            printf("%d ",arr[minr][j]);
            count++;
        } minr++;
        if(count>=total) break;
        // print right column
        for(int i=minr;i<=maxr;i++){
            printf("%d ",arr[i][maxc]);
            count++;
        } maxc--;
        if(count>=total) break;
        // print buttom row
        for(int j=maxc;j>=minc;j--){
            printf("%d ",arr[maxr][j]);
            count++;
        } maxr--;
        if(count>=total) break;
        // print left column
        for(int i=maxr;i>=minr;i--){
            printf("%d ",arr[i][minc]);
            count++;
        } minc++;
    }
}