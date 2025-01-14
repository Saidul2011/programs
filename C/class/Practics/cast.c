#include<stdio.h>

int main(){
    char str[20];
    scanf("%[^\n]",str);
    printf("%c\n",str[0]);
    printf("%c\n",str[1]);
    for (int i = 0; i < 4; i++)
    {
        printf("%c",str[i]);
    }
    
    
    return 0;
}