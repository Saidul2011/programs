#include<stdio.h>
void main(){
    int m=21,p,c;
    while (1)
    {
       printf("%d matchstick left.\n",m);
       printf("You pickup 1-4 maches:\n");
       scanf("%d",&p);
       m=m-p;
       printf("%d matchstick left.\n",m);
       c=5-p;
       printf("Computer picked :%d\n",c);
       m=m-c;
       if(m==1){
        printf("%d matchstick left.\n",m);
        printf("You lost the Game.");
        break;
       }
    }
    
}