#include<stdio.h>
int main(){
int p=80000;
int m=p*52/100;
int w=p-m;
int l=p*48/100;
int lm=p*35/100;
int lw=l-lm;
int ilm=m-lm;
int ilw=w-lw;
printf("Number of illiterate men: %d\nNumber of illiterate women %d",ilm,ilw);

    return 0;
}