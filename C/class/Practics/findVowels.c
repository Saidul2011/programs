#include<stdio.h>

int main(){
    char str[100];
    char vow[100];
    int c=-1;
    printf("Enter the sentence:");
    gets(str);
    int i=0;

    while(str[i] != '\0'){
        if(str[i] =='A') {c++; vow[c]='A'; }
        else if(str[i]=='a') {c++; vow[c]='a'; }
        else if(str[i]=='E') {c++; vow[c]='E'; }
        else if(str[i]=='e') {c++; vow[c]='e'; }
        else if(str[i]=='I') {c++; vow[c]='I'; }
        else if(str[i]=='i') {c++; vow[c]='i'; }
        else if(str[i]=='O') {c++; vow[c]='O'; }
        else if(str[i]=='o') {c++; vow[c]='o'; }
        else if(str[i]=='U') {c++; vow[c]='U'; }
        else if(str[i]=='u') {c++; vow[c]='u'; }
        i++;
    }
    c++;
    vow[c]='\0';
    printf("%s",vow);

    return 0;
}