#include<stdio.h>
int main(){
    int days;
    printf("Enter number of days : ");
    scanf("%d",&days);
    
    int yy, mm, dd;
    yy=days/365;

    mm= (days%365)/30;

    dd= (days%365)%30;

    printf("%d years, %d month, %d days.",yy, mm, dd);

    return 0;
}