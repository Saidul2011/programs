#include<stdio.h>
void main(){
    /* Q) scan marks of 7 students, if mark of any student is less than 35 print those 
           those students fail. */
    int arr[7];
    for(int i=0;i<=6;i++){
        printf("Roll No. %d enter your marks : ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Roll No.:");
    for(int i=0;i<=6;i++){
        if(arr[i]<35) printf(" %d,",i+1);
    }
    printf(" Fail.");
}