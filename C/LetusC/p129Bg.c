#include<stdio.h>
#include<conio.h>
void system();
void main(){
    int n;
    int p=0;
    int m=0;
    int z=0;
    printf("How many number you want to Enter:");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){
        int a;
        printf("Enter a number : ");
        scanf("%d",&a);
        if(a>0) p++;
        if(a<0) m++;
        if(a==0) z++;
        
    }
    system("cls");
    printf("Positive numbers:%d.\nNegative numbers:%d.\nZero numbers:%d.",p,m,z);
}