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
node *min_key(node *r){
    while(r->left !=NULL){
        r = r->left;
    }
    return r;
}
node *delete(node *root, int key){
    if(root == NULL) return root;

    if(key < root->data) root->left=delete(root->left,key);
    else if(key > root->data) root->right=delete(root->right, key);
    else{
        if(root->left == NULL && root->right == NULL){
            free(root);
            return NULL;
        }
        else if(root->left == NULL){
            node *temp= root->right;
            free(root);
            return temp;
        }
        else if(root->right == NULL){
            node *temp= root->left;
            free(root);
            return temp;
        }
        node *temp=min_key(root->right);
        root->data=temp->data;
        root->right=delete(root->right,temp->data);
    }
    return root;
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