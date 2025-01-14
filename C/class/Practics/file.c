#include<stdio.h>
int main(){
    FILE *f1;                    
    char c;
    printf("Data Input\n\n");

    f1= fopen("INPUT","w");  // open file

    while((c=getchar())!=EOF)  // write mode
        putc(c,f1);

    fclose(f1);                   //  close file

    printf("Data Output\n\n");

    f1=fopen("INPUT", "r");  // reopen file 

    while((c=getc(f1)) !=EOF)   // read mode 
        printf("%c",c);

    fclose(f1);                   // close file

    return 0;
}