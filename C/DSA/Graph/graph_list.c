#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    char vertex;
    struct node *next;
}node;

void creat_graph(node *adj[],int no_of_node){
    struct node *new_node, *last;
    int i,j,n;
    char nei;
    for ( i = 0; i <no_of_node; i++)
    {
        last=NULL;
        printf("Enter the no. of neighbours of %c: ",i+65);{
        scanf("%d",&n);
        printf("Enter the neighbours of %c: ",i+65);
            for (j = 0; j < n; j++)
            {
                
                scanf(" %c",&nei);
                new_node=(node *)malloc(sizeof(node));
                new_node->vertex=nei;
                new_node->next=NULL;
                if(adj[i]==NULL){
                    adj[i]=new_node;
                }
                else{
                    last=adj[i] ;  
                    while(last->next !=NULL){
                        last=last->next;
                    }
                    last->next=new_node;
                
                } 

            }
         }
    }
}
void display(node *adj[],int no_of_node){
    node *ptr;
    int i;
    for ( i = 0; i < no_of_node; i++)
    {
        ptr=adj[i];
        printf("\n The neighbours of node %c are: ",i+65);
        while (ptr != NULL)
        {
            printf("%c  ",ptr->vertex);
            ptr=ptr->next;
        }
        
    }
    
}

int main(){
    node *adj[10];
    int i,no_of_node;
    printf("Enter the number of nodes in Graph: ");
    scanf("%d",&no_of_node);
    for ( i = 0; i < no_of_node; i++){
          adj[i]=NULL;
    }

        creat_graph(adj,no_of_node);
        printf("The graph is: ");
        display(adj,no_of_node);

        return 0;
    
    
}