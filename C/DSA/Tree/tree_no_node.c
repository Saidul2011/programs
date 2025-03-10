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

int no_node(node *root){
    if(root == NULL) return 0;
    else
        return no_node(root->left) + no_node(root->right) + 1;
}

int no_inNode(node *root){
    if(root == NULL) return 0;
    if(root->left == NULL && root->right == NULL) return 0;
    else
        return no_inNode(root->left) + no_inNode(root->right) + 1;
}

int no_leftNode(node *root){
    if(root == NULL ) return 0;
    if(root->left == NULL && root->right == NULL) return 1;
    else
        return no_leftNode(root->left) + no_leftNode(root->right) ;
}


int main(){
    int ch;
    while(1){
        printf("1. Creat new node\n2. Display\n3. No. of total node\n4.  No. of total internal node.\n5. No. of left node\n");
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
            case 3: printf("No. of total node: %d\n",no_node(root));
                    break;
            case 4: printf("No. of total internal node: %d\n", no_inNode(root));
                    break;
            case 5: printf("No of left node: %d\n",no_leftNode(root));
                    break;
            default: printf("Invalid input!\n");
        }
    }
    return 0;
}