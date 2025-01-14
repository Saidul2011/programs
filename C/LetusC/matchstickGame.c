#include<stdio.h>
#include<conio.h>
void main(){
    int m=21,p,c;
    void system();
    while (1)
    {
        system("cls");
       printf("%d matchstick left.\n",m);
       printf("Player:1 pickup 1-4 maches:");
       scanf("%d",&p);
       if(p>4 || p<1) {
        printf("Invalide picked.");
        continue;
       }
       m=m-p;
       if(m<=4){
        printf("%d matchstick left.\n",m);
        printf("Player:1 win the Game.");
        break;
       }
       printf("%d matchstick left.\n",m);
       printf("Player:2 pickup 1-4 maches:");
       scanf("%d",&c);
       if(c>4 || c<1) {
        printf("Invalide picked.");
        continue;
       }
       m=m-c;
       if(m<=1){
        printf("%d matchstick left.\n",m);
        printf("Player:2 win the Game.");
        break;
       }
    }
    
}