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

void search(node *root, int data){
    if(root==NULL){
        printf("%d Not exist!\n",data);
        return;
    }
    if(root->data==data){
        printf("%d is exist\n",data);
        return;
    }
    else if(root->data > data){
            search(root->left,data);
    }
    else{
        search(root->right,data);
    }
}

// non recursive

// void search_iter(node *root,int data){
//     while(root !=NULL){
//         if(root->data == data){
//             printf("%d Found\n",data);
//             return;
//         }
//         else if(root->data > data){
//             root=root->left;
//         }
//         else {
//             root=root->right;
//         }
        
//     }
//     printf("%d Not found!\n");
// }

node *delete(node *temp,int data){
    if(root->data == data){
        node *hold=root;
        temp=temp->right;
        while(temp->left != NULL){
            temp=temp->left;
        }
        temp->left=root->left;
        root=temp;
        free(hold);
        hold=NULL;
        return root;
    }
    else{
        node *prev=temp;
        while(temp != NULL){
            prev=temp;
            if(temp->data == data){
                    node *hold=temp;
                    if(temp->left==NULL && temp->right==NULL){
                        free(temp);
                        temp=NULL;
                    }
                    else if(temp->right!=NULL && temp->left!=NULL){
                        temp=temp->right;
                        while(temp->left != NULL){
                                temp=temp->left;
                            }
                        temp->left=hold->left;
                        prev->left=temp;
                        free(hold);
                        hold=NULL;
                    }
                    else if(temp->right!=NULL){
                            temp=temp->right;
                            prev->left=temp;
                            free(hold);
                            hold=NULL;
                    }
                    else{
                        temp=temp->left;
                        prev->left=temp;
                        free(hold);
                        hold=NULL;
                    }
                }
            else{
                temp=temp->right;
                if(temp->data == data){
                    node *hold=temp;
                    if(temp->left==NULL && temp->right==NULL){
                        free(temp);
                        temp=NULL;
                    }
                    else if(temp->right!=NULL && temp->left!=NULL){
                        temp=temp->right;
                        while(temp->left != NULL){
                                temp=temp->left;
                            }
                        temp->left=hold->left;
                        prev->right=temp;
                        free(hold);
                        hold=NULL;
                    }
                    else if(temp->right!=NULL){
                            temp=temp->right;
                            prev->right=temp;
                            free(hold);
                            hold=NULL;
                    }
                    else{
                        temp=temp->left;
                        prev->right=temp;
                        free(hold);
                        hold=NULL;
                    }
                }
            }
            
        }
        return root;
    }
    
}
int main(){
    int ch;
    while(1){
        printf("1. Creat new node\n2. Display\n3. Search\n4. Delete\n");
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
            case 3: printf("Enter data you want to search : ");
                    int key;
                    scanf("%d",&key);
                    search(root,key);
                    break;
            case 4: printf("Enter item you want to delete :");
                    int item;
                    scanf("%d",&item);
                    root=delete(root,item);
                    break;
            default: printf("Invalid input!\n");
        }
    }
    return 0;
}