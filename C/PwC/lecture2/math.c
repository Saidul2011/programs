#include<stdio.h>
int main(){
    /*Q) Given a point (x,y), write a program to find out if
         it lies on the x-axis , y-axis or at the origin. */
    int x,y;
    printf("Enter a point : ");
    scanf("%d%d",&x,&y);
    if(x==0 && y==0)
    {
        printf("Lies on origin");
    }
    else if (x==0)
    {
        printf("Lies on x-axis");
    }
    else if (y==0)
    {
        printf("Lies on y-axis");
    }
    else
    {
        printf("Point does not lies x or y axis");
    }
    

    return 0;
}