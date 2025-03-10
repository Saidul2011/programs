#include<stdio.h>
#include<stdlib.h>
#define size 10
typedef struct node{
    char vertex;
    struct node *next;
}node;
node *adj[10];
void creat_graph(int no_of_node){
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
void display(int no_of_node){
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
int VISITED[size];


void DFS(char source){
    VISITED[source-65]=1;
    printf(" %c ",source);
    node *ptr=adj[source-65];
    while(ptr !=NULL){
        if(VISITED[(ptr->vertex)-65]==0){
            DFS(ptr->vertex);
        }
        ptr=ptr->next;
    }
}
int main(){
    
    int i,no_of_node;
    
    printf("Enter the number of nodes in Graph: ");
    scanf("%d",&no_of_node);
    for (int i = 0; i < no_of_node; i++)
    {
        VISITED[i]=0;
    }
    for ( i = 0; i < no_of_node; i++){
          adj[i]=NULL;
    }

        creat_graph(no_of_node);
        printf("The graph is: ");
        display(no_of_node);
        char source='D';
        DFS(source);

        return 0;
    
    
}