#include<stdio.h>
#include<math.h>
void main(){
   int n,sum,r;
    for(int i=1000;i<=10000;i++){
      n=i;
      sum=0;
      while(n!=0) {
        r=n%10;
        sum=sum+pow(r,4);
        n=n/10;
      }
      if (sum==i)
      {
      printf("%d ",i);
      }
      
        
    }
}