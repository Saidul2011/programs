#include<stdio.h>
int main()
{
     //Q) Take three positive integers input and print 
     // the greatest.
     int a,b,c;
     printf("Enter three number : ");
     scanf("%d%d%d",&a,&b,&c);
     if((a>b && b>c)|| (a>c && c>b) ){
        printf("1st (%d) number greatest",a);
     }
     else if ((b>a && a>c) || (b>c && c>a)){
        printf("2nd (%d) number greatest",b);
     }
     else
     {
        printf("3rd (%d) number greatest",c);
     }
     


    return 0;
}