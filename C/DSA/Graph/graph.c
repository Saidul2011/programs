#include<stdio.h>
#include<windows.h>
#include<conio.h>
 void gotoxy(short int col, short int row);
 #define HLINE for(int i=0; i<79; i++)\
                printf("%c",196);
#define VLINE(X,Y){\
gotoxy(X,Y);\
printf("%c",179);\
}

int main(){
    int i,y;
    system ("cls");
    gotoxy(1,12);
    HLINE 
    for(y=1; y<25; y++)
        VLINE(39,y);
 return 0;
}

void gotoxy(short int col, short int row){
    HANDLE hStdout= GetStdHandle(STD_OUTPUT_HANDLE);
    COORD position ={col, row};
    SetConsoleCursorPosition(hStdout, position);
}
