#include<stdio.h>
#include<string.h>

int main(){
    struct student_info{
        char name[20];
        char add[100];
        int roll;
        char stream;
        int year;
    }std[3];
    int i;
    //strcpy(std[0].name,"Saidul Islam");
    gets(std[0].name);
    printf("%s\n",std[0].name);
    puts(std[0].name);

    return 0;
}