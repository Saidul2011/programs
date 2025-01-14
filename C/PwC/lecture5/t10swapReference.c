#include<stdio.h>
/*void swap(int x, int y ){
    int temp=x;
    x=y;
    y=temp;
    return ;

}
int main(){
    printf("Enter a ");
    int a;
    scanf("%d",&a);
    printf("Enter b ");
    int b;
    scanf("%d",&b);
    swap(a,b);
    printf("Value of a is %d\n",a);
    printf("Value of a is %d",b);
    return 0;
}*/  // Don't work 
void swap(int* x, int* y){
    int temp=*x;  // temp= a
    *x= *y; //  a=b
    *y= temp; // b=a
    return;
}
int main(){
    printf("Enter a ");
    int a;
    scanf("%d",&a);
    printf("Enter b ");
    int b;
    scanf("%d",&b);
    swap(&a,&b);
    printf("Value of a is %d\n",a);
    printf("Value of a is %d",b);
    return 0;
}