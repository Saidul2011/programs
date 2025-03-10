#include<stdio.h>
#include<stdlib.h>

typedef struct bst{
    struct bst *left;
    int data;
    struct bst *right;
}node;
node *root=NULL;

void creat(int data){
    node *new=(node *)malloc(sizeof(node));
    new->left=NULL;
    new->data=data;
    new->right=NULL;
    node *temp=root;
    if(root==NULL){
        root=new;
    }
    else{
        while(1){
            if(temp->data > new->data){
                if(temp->left==NULL){
                    temp->left=new;
                    break;
                }
                else temp=temp->left;
            }
            else if(temp->data < new->data){
                if(temp->right==NULL){
                    temp->right=new;
                    break;
                }
                else temp=temp->right;
            }
            else{
                printf("%d already exist !\n",data);
                return;
            }
        }
    }
}

void inOrder(node *temp){
    if(temp==NULL) {
        return;
    }
    inOrder(temp->left);
    printf("%d ",temp->data);
    inOrder(temp->right);
}
void display(){
    if(root==NULL){
        printf("No element exist !\n");
        return;
    }
    else{
        node *temp=root;
        printf("InOrder elements : ");
        inOrder(temp);
        printf("\n");
    }
}


int height(node *root){
    if(root==NULL) return 0;
    else{
        int left_height = height(root->left);
        int right_height = height(root->right);
        if(left_height > right_height) 
            return left_height + 1;
        else
            return right_height + 1;
    }
}

int main(){
    int ch;
    while(1){
        printf("1. Creat new node\n2. Display\n3. Height of tree\n");
        printf("Enter your choice : ");
        scanf("%d",&ch);
        switch(ch){
            case 1: printf("Enter data : ");
                    int data;
                    scanf("%d",&data);
                    creat(data);
                    break;
            case 2: display();
                    break;
            case 3: printf("The height of the tree: %d\n",height(root));
                    break;
            default: printf("Invalid input!\n");
        }
    }
    return 0;
}