#include<stdio.h>
void even(int x){
    if(x%2==0){
        printf("The number is even.");
    }
    else printf("The number is odd.");
}

void main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    even(n);
}