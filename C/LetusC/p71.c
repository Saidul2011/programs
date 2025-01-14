#include<stdio.h>
int main(){
    char g,q;   //g='M' for male, g='F'for female,
                //q='P' for post-graduate,q='G' for graduate
    int y,s;
    printf("Enter the gender,qualification and years of service : ");
    scanf("%c %c %d",&g,&q,&y);
    if(g=='M' && y>=10 && q=="P") printf("Salary Rs.%d",s=15000);
    if(g=='M' && y<10 && q=="G") printf("Salary Rs.%d",s=7000);
    if(g=='F' && y>=10 && q=="P") printf("Salary Rs.%d",s=12000);
    if(g=='F' && y>=10 && q=="G") printf("Salary Rs.%d",s=9000);
    if(g=='F' && y<10 && q=="G") printf("Salary Rs.%d",s=6000);
    else printf("Salary Rs.%d",s=10000);
    

    return 0;
}