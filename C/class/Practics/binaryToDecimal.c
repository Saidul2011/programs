#include<stdio.h>
int sum=0, rem;
int decimal(int n){
    int i =0;
    while(n!=0){
        rem=n%10;
        sum+= rem << i;
        i++;
        n/=10;
    }
    

return sum;

}

void main(){
    int b;
    printf("Enter a Binary number : ");
    scanf("%d",&b);

    int value=decimal(b);

    printf("Decimal value is: %d",value);
}
