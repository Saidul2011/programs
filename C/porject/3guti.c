#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

char matx[3][3];
void intia_matx();
void display();
void player_move(char );


void main(){
    printf("TIN GUTI GAME\n");
    intia_matx();
    display();
    player_move('X');




}

void intia_matx(){
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
           if(i==0)  matx[i][j]='X';
           if(i==1)  matx[i][j]=' ';
           if(i==2)  matx[i][j]='O';
        }
        
    }
    
}

void display(){
    system("cls");
    for (size_t i = 0; i < 3; i++)
    {
        
        printf("\n%c----%c----%c", matx[i][0], matx[i][1], matx[i][2]);
        printf("|\\   |   /|");
        printf("|  \\ | /  |");
        

    }
    
}

void player_move(char c){
    int x, y;
    printf("Select the guti you want to move :");
    scanf("%d", &x);
    int t=x-1;
    int i=t/3, j=t%3;
    if(matx[i][j]==c){
        matx[i][j]='*';
    }
    else {
        printf("Invalid select!");
        player_move(c);
    }
    display();
    printf("Move your selected guti :");
    scanf("%d", &y);
    int p=y-1;
    int r=p/3, s=p%3;
    if(matx[r][s]==' '){
        matx[r][s]=c ;
        matx[i][j]=' ';
    }
    else{
        printf("Invalid move!");
        player_move(c);
    }
    display();
}