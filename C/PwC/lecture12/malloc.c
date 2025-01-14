#include<stdio.h>
#include<stdlib.h>

void main(){
    int n;
    printf("Enter a the no. of integer you want: ");
    scanf("%d",&n);

    int *ptr= (int*) malloc(n*sizeof(int));
    //int *p=ptr;
    for(int i=1;i<=n;i++){
        scanf("%d",&(*ptr));
        ptr++;
    }
    ptr=ptr-n;
    for(int i=1;i<=n;i++){
        printf("%d ",(*ptr));
        ptr++;
    }
}