#include<stdio.h>
int main(){
    int cost, sell;
    printf("Enter the cost price : ");
    scanf("%d",&cost);
    printf("Enter the sell price : ");
    scanf("%d",&sell);
    int profit=sell-cost;
    int loss=cost-sell;
    if(cost<sell){
        printf("Profit\nAmount of profit is : %d",profit);
    }
    if(cost==sell){
       printf("No Loss or Profit\nAmount of profit(loss) is : %d",loss);
    }
    else
    {
        printf("Loss\nAmount of loss is : %d",loss);
    
    }
    

    return 0;
}