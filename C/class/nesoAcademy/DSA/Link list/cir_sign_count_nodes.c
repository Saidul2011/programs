#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

void print(struct node *tail);
struct node *addToEmpty(void);
struct node *add_end(struct node *tail, int i);
int noOfNodes(struct node *tail);


int main(){
    int n;
    printf("Enter the number of nodes");
    scanf("%d",&n);
    struct node *tail=NULL;
    if(n !=0) {
       for (size_t i = 1; i <= n; i++)
        {
            if(i==1) tail=addToEmpty();
            else tail=add_end(tail,i);
            
        }

        print(tail);

    }
    int num=noOfNodes(tail);
    printf("\nThe no of nodes is: %d",num);
    return 0;
}

struct node *addToEmpty(){
    int x;
    printf("Enter a value in node 1:  ");
    scanf("%d",&x);

    struct node *temp=malloc(sizeof(struct node));
    temp->data=x;
    temp->next=temp;

    return temp;
}
void print(struct node *tail){
    struct node *ptr=tail->next;
    printf("\n");
    do{
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }while (ptr != tail->next);
    
}

struct node *add_end(struct node *tail, int i){
    int x;
    printf("Enter a value in node %d:  ",i);
    scanf("%d",&x);

    struct node *new=malloc(sizeof(struct node ));
    new->data=x;
    new->next=tail->next;
    tail->next=new;
    tail=new;



return tail;

}

int noOfNodes(struct node *tail){
    int count=0;

    if(tail)
    {    struct node *ptr=tail->next;

        do{
            count++;
            ptr=ptr->next;
        }while(ptr !=tail->next);
    }

    return count;
}