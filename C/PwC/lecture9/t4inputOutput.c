#include<stdio.h>
#include<string.h>
void main(){
    char str[40];
    printf("Input: "); 
    scanf("%s",str); // don't use & sign
    // only thr first word will consideredsk 
    printf("Output: ");
    printf("%s",str);
}