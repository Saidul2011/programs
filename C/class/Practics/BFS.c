#include<stdio.h>
#include<stdlib.h>

int visite[4]={0,0,0,0};

int G[4][4]={
    0,1,0,0,
    0,0,0,1,
    0,0,0,1,
    1,0,1,0
};

int Q[4];
int f=-1,r=-1;

int isFull(){
    return (r==3);
}
int isEmpty(){
    return ((f==-1 && r==-1) ||(f==r));
}
void enque(int data){
    if(!(isFull())){
        Q[++r]=data;
    }
}

int deque(){
    if(!(isEmpty())){
        return Q[++f];
    }
}


void BFS(int s){
    int node;
    visite[s]=1;
    printf("%d ",s);
    enque(s);
    while (!(isEmpty()))
    {
        node=deque();
        for (int  i = 0; i < 4; i++)
        {
            if(G[node][i] ==1 && visite[i]==0){
                printf("%d ",i);
                visite[i]=1;
                enque(i);
            }
        }
        
    }
    
}
int main(){
    int s=3;
    BFS(s);

}