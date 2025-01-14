#include<stdio.h>
#include<string.h>
void main(){
    char str[20]="sksaidulislam";
    int count=0;
    for (int i = 0; i < 20; i++)
    {
        if ( str[i]==65 || str[i]==69 || str[i]==73 || str[i]==79 || str[i]==85 ||
             str[i]==97 || str[i]==101 || str[i]==105 || str[i]==111 || str[i]==117)
        {
            count++;
        }
    }
    printf("%d",count);
}