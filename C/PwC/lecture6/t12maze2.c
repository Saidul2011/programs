#include<stdio.h>
// maze path only right and down move
int maze(int n,int m){
    int rightWay=0;
    int downWay=0;
    if(n==1 && m==1) return 1;
    if(n==1){
         rightWay +=maze(n,m-1);
    }
    if(m==1){
         downWay +=maze(n-1, m);
    }
if(n>1 && m>1){
     rightWay+=maze(n,m-1);
     downWay+=maze(n-1,m);
}
    int totalWays=rightWay + downWay;
    return totalWays;
}
int main(){
    int n,m;
    printf("Enter numbers rows and columns  ");
    scanf("%d%d",&n,&m);
    int totalWays=maze(n,m);
    printf("Total number of ways: %d\n",totalWays);
    return 0;
}