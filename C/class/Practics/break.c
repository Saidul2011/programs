#include<stdio.h>
void main(){
    int n ,sum=0;
    printf("Enter nth number :");
    scanf("%d",&n);
   for(int i=1;i<=n;i++){
    if(i%2!=0){
     continue;
   }
   sum+=i;
}
printf("Sum is %d",sum);
}
