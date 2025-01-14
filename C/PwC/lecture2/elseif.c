#include<stdio.h>
int main(){
    /* result marks grade
     90-100 : AA grade
     75-89  : A  grade
     60-74  : B grade
     40-59  : c  grade
     below 40 : Fail */
     

    int m;
    printf("Enter your marks :");
    scanf("%d",&m);
    if(m>89)
    {
        printf("AA grade");
    }

    else if  (m>74)
    {
         printf("A grade");
    }
    else if (m>59)
    {
        printf("B grade");
    }
     else if (m>39)
    {
        printf("C grade");

    }
    else
    {
        printf("Fail");
    }

    return 0;
}