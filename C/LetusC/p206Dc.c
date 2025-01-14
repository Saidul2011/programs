#include<stdio.h>
void roman(int n){
if(n>=1000){
    int a=n/1000;
    for(int i=1;i<=a;i++){
        printf("m");
    }
    n=n-(a*1000);
}
if(n>=500){
    printf("d");
    n=n-500;
}
if(n>=100){
    int b=n/100;
    for ( int i = 1; i <=b; i++)
    {
       printf("c");
    }
    
    n=n-(b*100);
}
if(n>=50){
    printf("l");
    n=n-50;
}
if(n>=10){
    int c=n/10;
    for(int i=1;i<=c;i++){
        printf("x");
    }
    n=n-(c*10);
}
if(n>=5){
    printf("v");
    n=n-5;
}
for (int i = 1; i <=n; i++)
{
    printf("i");
}

}
void main(){
    int year;
    printf("Enter the year: ");
    scanf("%d",&year);
    roman(year);
}