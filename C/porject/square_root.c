#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};
struct node* add_begn(struct node *head, int d);
void add_at_end(struct node *head, int data);
int no_of_digit(int x);
int no_of_nodes(struct node *head);
void add_result(struct node *res, int ptr[]);

int noOfDgAns;

int main(){
    struct node *head=NULL;
    head = (struct node *)malloc(sizeof(struct node));
    head->data=0;
    head->link=NULL;

    struct node *res=NULL;
    res = (struct node *)malloc(sizeof(struct node));
    res->data=0;
    res->link=NULL;

    int x;
    printf("Enter the number:");
    scanf("%d",&x);
    int temp=x;
    int digit=no_of_digit(temp);
while(temp){

        int two_remainder=temp%100;
        head=add_begn(head,two_remainder);
        temp/=100;
}
    int noOfPair=no_of_nodes(head);

    int pair[noOfPair];
    for (size_t i = 0; i < noOfPair; i++)
    {
        pair[i]=head->data;
        head=head->link;
    }
    for (size_t i = 0; i < noOfPair; i++)
    {
        printf("%d ",pair[i] );
    }
    int first_rem=0;
    for (size_t i = 9; i >=1; i--)
    {
        if(i*i<=pair[0]){
        add_at_end(res,i);
        first_rem=pair[0]-(i*i);
        break;
        }
    }
    noOfDgAns=no_of_nodes(res)+1;
    int result[noOfDgAns];

    void add_result
(res,result);

    for (size_t i = 9; i >=0; i--)
    {
        int a=first_rem*100+pair[1];
        if((result[1]*20+i)*i <=a){
            add_at_end(res,i);
            first_rem=a-((result[1]*20+i)*i);
            break;
        }
    }
    






    printf("\n");

    for (size_t i = 1; i < noOfDgAns; i++)
    {
        printf("%d ",result[i]);
    }
 
    return 0;
}

int no_of_digit(int x){
    int count=0;
    while(x){
        count++;
        x/=10;
    }
    return count;
}

struct node* add_begn(struct node *head, int d){
    struct node *ptr= malloc(sizeof(struct node));
    ptr->data=d;
    ptr->link=NULL;

    ptr->link=head;
    head=ptr;

    return head;
}

void add_at_end(struct node *head, int data){
    struct node *ptr, *temp;
    ptr=head;

    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->link=NULL;

    while(ptr->link !=NULL){
        ptr=ptr->link;
    }
    ptr->link=temp;
}

int no_of_nodes(struct node *head){
    int count=0;
    struct node *ptr=head;
    while(ptr->link !=NULL){
        count++;
        ptr=ptr->link;

    }
    return count;
}

void add_result(struct node *res, int ptr[]){
    
        ptr[0]=res->data;
    
}

// struct node *add_res(struct node *res, int num){

// }

// int result(struct node *res, int num){

// }
