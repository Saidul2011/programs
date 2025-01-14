#include<stdio.h>
// maze path only right and down move
int maze(int sr, int sc,int er,int ec){
    int rightWay=0;
    int downWay=0;
    if(sr==er && sc==ec) return 1;
    if(sr==er){
         rightWay +=maze(sr,sc+1,er,ec);
    }
    if(sc==ec){
         downWay +=maze(sr+1,sc,er,ec);
    }
if(sr<er && sc<ec){
     rightWay+=maze(sr,sc+1,er,ec);
     downWay+=maze(sr+1,sc,er,ec);
}
    int totalWays=rightWay + downWay;
    return totalWays;
}
int main(){
    int n,m;
    printf("Enter numbers rows and columns  ");
    scanf("%d%d",&n,&m);
    int totalWays=maze(1,1,n,m);
    printf("%d\n",totalWays);
    return 0;
}