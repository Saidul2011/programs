#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main(){
    char *s;
    register int t;

    s=malloc(80);

    if(!s){
        printf("Memory requist failed,\n");
        exit(1);
    }

    gets(s);

    for(t=strlen(s)-1; t>=0; t--){
        putchar(s[t]);
        free(s);
    }
}