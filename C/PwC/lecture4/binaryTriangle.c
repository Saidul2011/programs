#include<stdio.h>
void main(){
    int n;
    printf("Enter number of rows ");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){
        int a=1;
        for(int j=1; j<=i;j++){
            if(i%2!=0){
                if((a%2==0)) printf("0 ");
                else printf("1 ");
            }
            else {
                if((a%2==0)) printf("1 ");
                else printf("0 ");
            }
            a++;
        }
        printf("\n"); 
        
    }
}