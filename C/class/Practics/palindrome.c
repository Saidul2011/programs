#include<stdio.h>
int palindrome(int n){
    int s=0;
    while (n!=0)
    {
        s=s*10 +n%10;
        n=n/10;
    }
        return s;
}
void main (){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
    int r = palindrome(i);
    if(i==r) printf("%d Palindrome.\n",i);
    else printf("Not palimdrome.");
    
}
}