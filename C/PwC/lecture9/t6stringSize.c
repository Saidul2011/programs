#include<stdio.h>
#include<string.h>
void main(){
    char str[40];
    printf("Input: "); 
    gets(str);
    int size=0;
    int i=0;
    while(str[i]!='\0'){
        size++;
        i++;
    }
    printf("Size: ");
    printf("%d",size); 
}