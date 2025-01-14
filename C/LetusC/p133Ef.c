#include<stdio.h>
void main(){
    char alf;
    printf("Enter a alfabet : ");
    scanf("%c",&alf);
    int num=(int)alf;
    int n=num-65;
    num-=n;
    int i=n;
    int j=num;
    while(i!=0){
        printf("%c ",j);
        j++;
        i--;
    }
    int k=n;
    int l=num;
    while(k!=-1){
        printf("%c ",l+n);
        l--;
        k--;
    }
    printf("\n");
    int m=n;
    int p=n;
    for(int i=1;i<=n;i++){
        for(int j=num;j<=num+m-1;j++){
            printf("%c ",j);
        } 
        m--;
        for(int a=1;a<=4*i-2;a++){
            printf(" ");
        }
        for(int b=num+p-1;b>=num;b--){
            printf("%c ",b);
           
        }
         p--;
        printf("\n");
    }
}