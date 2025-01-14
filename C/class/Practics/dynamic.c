#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char* str1;
    char* str2;

    str1=(char* )malloc(sizeof(char)*20);
    str2=(char* )malloc(sizeof(char)*20);
    printf("Enter first string : ");
    gets(str1);
    printf("Enter secend string : ");
    gets(str2);

    if(strlen(str1) != strlen(str2)) printf("Not Equal !");
    else{
        int i=0;
        int flag=0;
        while(str1[i] !='\0'){
            if(str1[i] != str2[i]){ 
            flag=1;
            break;
            }
            i++;
        }
        if(flag==0) printf("Equal !");
        else{
            printf("Not Equal!");
        }

    }

    
    


return 0;

}