#include<stdio.h>
void main(){
    int arr[]={10,30,45,67,56,74};
    int *i;
    int *j;
    i=&arr[1];
    j=&arr[5];
    int **k;
    int **m;
    k=&i;
    m=&j;
    printf("%u\n", arr);

    printf("%u\n", &arr[0]);
    printf("%u\n", i);
    printf("%u\n", j);
    printf("%u\n", k);
    printf("%u\n", m);

    printf("%u\n", *i);
    printf("%u\n", j-i);
    printf("%u\n", *j-*i);
    
    int temp=*i;
    *i=*j;
    *j=temp;

    for(int a=0; a<6; a++){
        printf("%d ",arr[a]);
    }
    i++;
    printf("\n%d",*i);
    i=i+2;
    printf("\n%d",*i);


}