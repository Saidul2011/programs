#include<stdio.h>
#include<string.h>
void main(){
    char str[7]="ABCDCBA";
    int a=1;
    for (int i = 0; i < 7; i++)
    {
        if (str[i]!=str[6-i])
        {
            a=0;
            break;
        }
    }
    if(a==1) printf("It is palindrome.");
   if(a==0)   printf("Not palindrome.");
}