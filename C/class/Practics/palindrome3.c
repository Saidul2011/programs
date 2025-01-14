#include<stdio.h>
int is_palindrome(char *s) {
    int lenght=0;
    while(s[lenght]!='\0'){
        lenght++;
    }
    int left=0;
    int right=lenght-1;
    while(left < right){
        if (s[left] != s[right]){
            return  0;
        }
        left++;
        right--;
    }
    return 1;
}
int main(){
    char str[]="abcdceba";
    if(is_palindrome(str)){
        printf("The string '%s' is a palindrome.\n",str);
    }
    else printf("The strine '%s' is not a palindrome.\n",str);


}
