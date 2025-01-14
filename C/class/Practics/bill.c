#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

struct node{
    int sn;
    char *item_name;
    float price;
    struct node *link;
};

int sln=0;

void add_item(struct node **);
float total(struct node *);
void print(struct node *);
void free_list(struct node *);

int  main(){
    struct node *head=NULL;
    // int ch;
    // while(1){
    //    printf("1. Add Item\n2. Print\n3. New Bill\n4. Quite\n");
    //     printf("Enter your choice : ");
    //     scanf("%d",&ch);
    //     system("cls");
    //     switch(ch){
    //         case 1 : add_item(&head); break;
    //         case 2 : print(head); break;
    //         case 3 : free_list(head); break;
    //         case 4 : exit(1);
    //         default: printf("Invalid output !\n");
    //     }
    //     }


    add_item(&head);
    add_item(&head);
    add_item(&head);
    
    print(head);
    free_list(head);
    return 0;
}

void add_item(struct node **Head){
    struct node *ptr=*Head;
    struct node *new=(struct node *)malloc(sizeof(struct node));
    if(new == NULL){
        printf("Memory allocation failed!\n");
        exit(1);
    }

    new->sn= ++sln;
    new->item_name=(char *)malloc(10*sizeof(char));
    if(new->item_name == NULL){
        printf("Memory allocation failed!\n");
        exit(1);
    }
    printf("Item name : ");
    ///gets(new->item_name);
    fgets(new->item_name,10,stdin);
    //new->item_name[strcspn(new->item_name,"\n")]=0; // remove newline

    printf("Price : ");
    scanf("%f", &new->price);
    //getchar();
    new->link=NULL;
    if(*Head == NULL){
        *Head= new;
    } else{
        while(ptr->link != NULL){
            ptr = ptr->link;
        }
        ptr->link=new;
    }
}


void print(struct node *head){
    struct node *ptr=head;
    printf("\n---------------------------------------\n");
    printf("SN.      Item             Price     \n");
    printf("---------------------------------------\n");
    if(head==NULL){
        printf("---------------Empty-------------------\n");
    }
    else{
        do{
            printf("%-8d %-16s %.2f \n",ptr->sn, ptr->item_name, ptr->price);
            ptr=ptr->link;
        }while(ptr!=NULL);

        printf("=======================================\n");
        printf("Total :                   %.2f\n",total(head));
        printf("---------------------------------------\n");
    }
}
 
float total(struct node *head){
    float sum=0;
    struct node *ptr=head;
        while (ptr!=NULL){
            sum+=ptr->price;
            ptr=ptr->link;
        }
        return sum;
}

void free_list(struct node *head){
    struct node *temp;
    while(head !=NULL){
        temp=head;
        head=head->link;
        free(temp->item_name);
        free(temp);
    }
}