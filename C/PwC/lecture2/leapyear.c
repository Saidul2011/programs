#include<stdio.h>
int main () {
    //Q) Any year input through the kryboard. Write a program to determine whether the year is a leap 
    // year or not.
    int y;
    printf("Enter a year : ");
    scanf("%d",&y);
    if ((y%4==0 && y%100!=0) || (y%400==0))
    {
        printf("Leap year");
    }
    else{
        printf("Not leap year");
    }

    return 0;
}