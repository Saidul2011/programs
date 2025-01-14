#include<stdio.h>

int main(){
    int arr[10];
    int prm[10];
    int count=-1;
    printf("Enter 10 integers: ");
    int i;
    for(i=0; i<10; i++) scanf("%d", &arr[i]);

    for(i=0; i<10; i++){
        int j;
        int flag=0; // prime
        for(j=2; j<arr[i]; j++){
            if(arr[i]%j == 0) {
                 flag=1; //not prime
                 break;
            }
        }
        

        if(arr[i] !=1 && arr[i] !=0 && flag==0){
            count++;
            prm[count]=arr[i];
        }
    }
    for(i=0; i<=count; i++) printf("%d ",prm[i]);

    return 0;
}