#include<stdio.h>
#include<conio.h>
void main(){
    void system();
    int choice;
    int n;
    int fact=1;
    int a=0;
    int e;  
    while(1){
        system("cls");
        printf("\n1. Factorial");
        printf("\n2. Prime or not");
        printf("\n3. Odd/Even");
        printf("\n4. Exit\n");
        printf("Choice one of them:");
        scanf("%d",&choice);
        switch(choice){
            case 1: // Factorial
                printf("Enetr a number:");
                scanf("%d",&n);
                for(int i=1;i<=n;i++){
                fact*=i;
                }
                printf("Factorial of %d is:%d\n",n,fact);
                printf("Exit press 1:");
                scanf("%d",e);
                if(e==1) break;

            case 2: // Prime or not
                printf("Enetr a number:");
                scanf("%d",&n);
                 for(int i=2;i<=n-1;i++){
                    if(n%i==0){
                        a=1;
                        break;
                    }
                 } 
                 if(n==1) printf("1 not prime neither composite.\n") ;
                 else if (n==2) printf("Prime\n");
                 else {
                    if(a==1) printf("Not Prime\n");
                    else printf("prime\n");
                 } 
                 printf("Exit press 1:");
                scanf("%d",e);
                if(e==1) break;
           
            case 3: // Even/Odd
                printf("Enetr a number:");
                scanf("%d",&n);
                if(n%2==0) printf("Even\n");
                else printf("Odd\n")  ;
              printf("Exit press 1:");
                scanf("%d",e);
                if(e==1) break;  
            case 4: //  Exit
                printf("Choice above those option.\n");
              printf("Exit press 1:");
                scanf("%d",e);
                if(e==1) break;    
        }

    }
}