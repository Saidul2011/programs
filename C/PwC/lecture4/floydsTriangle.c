#include<stdio.h>
void main(){
    int n;
    printf("Enter number of rows ");
    scanf("%d",&n);
    int a=1;
    for(int i=1;i<=n;i++){
        
        for(int j=1; j<=i;j++){
            if(a<10) printf("%3d", a);
         else printf("%3d",a);
         a++;
        }
        printf("\n");
    }
}