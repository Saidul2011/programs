#include<stdio.h>
#include<string.h>

// wrt a program all str manupilation fun in single cote;
// what is the 
void main(){
    int value;
    char str1[50];
    char str2[50];
    gets(str1);
    gets(str2);
    strcpy(str2,str1);
    puts(str2);
}