#include<stdio.h>

void bubble(int *item, int count){
    register int a, b, t;

    int num_of_turms=0;

    for(a=1; a<count; a++){
        for(b=count-1; b>=a; b--){
            if(item[b-1]>item[b]){
                t=item[b-1];
                item[b-1]=item[b];
                item[b]=t;
            }
           num_of_turms++; 
        }
    }
   printf("%d\n",num_of_turms);
}

void main(){
    int arr[7]={1,2,3,4,5,6,7};
    bubble(arr,7);

    for (size_t i = 0; i < 7; i++)
    {
       printf("%d ",arr[i]);
    }
    

}