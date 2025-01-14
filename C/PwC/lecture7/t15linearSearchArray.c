#include<stdio.h>
#include<stdbool.h>
void main(){
    int arr[10]={11,32,43,23,65,23,13,27,32,11};
    int x;
    printf("Search : ");
    scanf("%d",&x);
    int idx=-1;
    bool flag=false;   // false means not present
    for(int i=0;i<10;i++){
        if(arr[i]==x){
            flag=true;  // true means present 
            idx=i;
            break;
        }
    }
    if(flag==false){
        printf("%d is not present in the array.",x);
    }
    else
    {
        printf("%d is present in the array and its index is %d.",x,idx);
    }
    
}