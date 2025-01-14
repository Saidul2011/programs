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
    for(int j=0,k=size-1;j<=k;j++,k--){
        char temp=str[j];
        str[j]=str[k];
        str[k]=temp;
    } 
    puts("The reverse string is: ");
    puts(str);
}