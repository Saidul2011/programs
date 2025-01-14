#include<stdio.h>
// Q) Given a martrix having 0-1 elements only, fine the row  with 
//    the maximum number of 1 elements .
int main(){
    int arr[3][4]={ 1,0,1,1,
                    0,1,0,1,
                    1,1,1,1 };
    int maxcount=0;
    int row=-1;
    for(int i=0;i<3;i++){

        int count=0;
        
        for(int j=0;j<4;j++){
            if(arr[i][j]==1) count++;
        }
        if(maxcount<count){
            maxcount=count;
            row=i;
        }
    }
    printf("Row %d takes maximum %d 1's : ",row,maxcount);
}