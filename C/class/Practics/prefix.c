#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

#define max 100
char infix[max];
char prefix[max];
char stack[max];
float numstk[max];
int top=-1;
int t=-1;
int i=0;
int j=0;

int isempty(){
    return top==-1;
}
int isfull(){
    return top==(max-1);
}

void push(char opr){
    if(isfull()) 
        printf("Stack is Full!\n");
    else{
        stack[++top]=opr;
    }
}

char pop(){
    if(isempty()){
        printf("stack is empty!\n");
        exit(1);
    }
    return stack[top--];
}

int prece(char opr){
    switch(opr){
        case '+':
        case '-': return 1;
        case '*':
        case '/': return 2;
        case '^': return 3;
        default: return 0;

    }
}

void reverse(char str[]){
    int n=strlen(str)-1;
    for(i=0; i<n/2; i++){
        char temp=str[i];
        str[i]=str[n-i];
        str[n-i]=temp;
    }
}
void inTpre(){
    char smb,next;
    i=0;
    reverse(infix);
    i=0;
    while (infix[i]!='\0')
    {   
        
        if(infix[i]=='(')
            infix[i]=')';
        else if(infix[i]==')')
            infix[i]='(';
        i++;
    }
    i=0;
    while(infix[i] !='\0'){
        smb=infix[i];
        if(smb>='0' && smb<='9'){
            while(infix[i]>='0' && infix[i]<='9' || infix[i]=='.'){
                prefix[j++]=infix[i++];
            }
            i--;
           
        }
        else if(smb=='('){
            push(smb);
        }
        else if(smb==')'){
            while(!isempty() && (next=pop()) !='('){
                prefix[j++]=next;
            }    
        }
        else if(prece(smb)>0){
            while(!isempty() && prece(smb)<prece(stack[top])){
                prefix[j++]=pop();
            }
            push(smb);
        }
        else{
            printf("Enter valid input!\n");
            exit(1);
        }
        i++;
    }
    while (!isempty())
    {
        prefix[j++]=pop();
    }
    reverse(prefix);  
    prefix[j]='\0';
}

//  float pre_evl(){
//     reverse(prefix);
//     float a,b,num;
//     for ( i = 0; i < strlen(prefix); i++)
//     {
//         if(prefix[i]>='0' && prefix[i]<='9'){
//             num=0;
//             while(prefix[i]>='0' && prefix[i]<='9'){
//                 num=num*10 + (prefix[i]-'0');
//                 i++;
//             }
//             if(prefix[i]=='.'){
//                 float factor=0.1;
//                 i++;
//             while(prefix[i]>='0' && prefix[i]<='9'){
//                 num= num+ (prefix[i]-'0')*factor;
//                 factor/=10;
//                 i++;
//             }    
//             }
//             numstk[++t]=num;
//         }
//         else if(prece(prefix[i])>0){
//             a=numstk[t--];
//             b=numstk[t--];
//             switch(prefix[i]){
//                 case '+':numstk[++t]=b+a; break;
//                 case '-':numstk[++t]=b-a; break;
//                 case '*':numstk[++t]=b*a; break;
//                 case '/':numstk[++t]=b/a; break;
//                 case '^':numstk[++t]=pow(b,a); break;
//             }
//         }
//     }
//     return numstk[t];
    

// }
int main(){
    printf("Enter infix Expression : ");
    scanf("%[^\n]", infix);
    
    
     inTpre();
     printf("\nPrefix : %s\n",prefix);
    //  printf("Result : %.2f\n", pre_evl());
    return 0;
}
