#include<stdio.h>
void leapYear(int n){
    if((n%4==0 && n%100!=0) || (n%400==0))
    printf("This is leap year.");
    else printf("Not leap year.");
}
void main(){
    int year;
    printf("Enter the year: ");
    scanf("%d",&year);
    leapYear(year);
}