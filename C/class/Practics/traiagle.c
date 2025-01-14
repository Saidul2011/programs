#include<stdio.h>
int main(){
int n;
printf("Enter a number: ");
scanf("%d",&n);
for(int i=0;i<=n/2;i++){
    for(int j=0;j<n;j++){
        if(j==(n/2)-i || j==(n/2)+i || i==n/2){
            printf("*  ");
        }
        else printf("   ");
    }
    printf("\n");
}
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(i==(n/2) || j==((n/2)) || i==0 || j==0 || i==n-1 || j==n-1 || i==j || i==(n-1)-j){
            printf("*  ");
        }
        else printf("   ");
    }
    printf("\n");
}
return 0 ;
}