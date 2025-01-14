#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    struct student_info{
        
        int roll;
        int year;
        char name;
    }stn[3];


    int i;
    
    for(i=0; i<3; i++){
        printf("Enter Student %d Information:\n",i+1);
        
        printf("Roll No.: ");
        scanf("%d",&stn[i].roll);
        
        printf("Year : ");
        scanf("%d",&stn[i].year);

        printf("Name : ");
        scanf("%s",  stn[i].name);
    }
    int n;
    printf("Enter S.L No. :");
    scanf("%d",&n);
    n--;
    printf("Student %d Information : \n",n);
    
    printf("Roll No.: %d\n",stn[n].roll);
    
    printf("Year : %d", stn[n].year);

    printf("Name : %s", stn[n].name);


    return 0;

}