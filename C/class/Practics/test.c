#include<stdio.h>
#include<stdlib.h>

typedef struct bst{
    struct bst *left;
    int data;
    struct bst *right;
}node;


node *insert(node *root,int key){
    node *new=(node *)malloc(sizeof(node));
    new->data=key;
    new->left=NULL;
    new->right=NULL;
    node *temp=root;
    if(root == NULL ) return new;
    else{
        while(1){
            if(temp->data > key){
                if(temp->left == NULL){
                    temp->left=new;
                    break;
                }
                else temp=temp->left;
            }
            else if(temp->data < key ){
                if(temp->right == NULL){
                    temp->right=new;
                    break;
                }
                else temp=temp->right;
            }
            else{
                printf("%d already exist\n",key);
                break;
            }
        }
    }
    return root;
}


void display(node *root){
    if(root != NULL ){
        display(root->left);
        printf("%d ",root->data);
        display(root->right);
    }
}

int main(){
    node *root = NULL;
    int elements[7]={23,45,11,67,11,21,5};
    for (int i = 0; i < 7; i++)
    {
        root=insert(root,elements[i]);   
    }
    display(root);

    return 0;
}
