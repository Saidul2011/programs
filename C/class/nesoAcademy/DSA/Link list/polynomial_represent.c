#include<stdio.h>
#include<stdlib.h>

struct node {
    float coeff;
    int expo;
    struct node *link;
};

struct node *create(struct node *head);
struct node *insert(struct node *head, float co, int ex);
void display(struct node *head);

int main(){
    struct node *head=NULL;
    printf("\nEnter the polynomial");
    head= create(head);
    display(head);

    return 0;
}

struct node *create(struct node *head){
    int n;
    printf("Enter the number of terms : ");
    scanf("%d",&n);
    int i;
    float coeff;
    int expo;

    for(i=0; i<n; i++){
        printf("Enter the coefficient for term %d : ",i+1);
        scanf("%f", &coeff);
        printf("Enter the exponent for term %d: ",i+1);
        scanf("%d", &expo);
        head=insert(head,coeff,expo);
        
    }
    return head;
}

struct node *insert(struct node *head, float co, int ex){
    struct node *temp;
    struct node *new=malloc(sizeof(struct node));
    new->coeff=co;
    new->expo=ex;
    new->link=NULL;

    if(head ==NULL ||  ex >= head->expo){
        new->link=head;
        head=new;
    }
    else{
        temp=head;
        while(temp->link !=NULL && temp->link->expo >= ex){
                temp=temp->link;
        }

        new->link=temp->link;
        temp->link=new;

    }

    return head;
}
void display(struct node *head){
    struct node *temp=head;
    if(head == NULL) printf("No polynomial.");
    else{
        
        while (temp !=NULL)
        {   if(temp->expo != 0){
                printf("(%.1fX^%d)",temp->coeff, temp->expo);
            }
            else 
            {
                printf("(%.1f)",temp->coeff);
                
            }
            

            temp=temp->link;
            if(temp !=NULL ) printf("+");
            else printf("\n");
        }
        
    }
}