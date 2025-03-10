#include<stdio.h>
#include<stdlib.h>

typedef struct queue{
    int size;
    int f;
    int r;
    int* arr;
}que;

int isEmpty(que *q){
    return q->r == q->f;
}

int isFull(que *q){
    return q->r == q->size-1;
}

void enque(que *q , int val){
    if(isFull(q)) printf("Que is Full !\n");
    else{
        q->r++;
        q->arr[q->r]=val;
        // printf("Enque element : %d\n", val);
    }
}

int deque(que *q){
    int a=-1;
    if(isEmpty(q)) printf("Que is Empty\n");
    else{
        q->f++;
        a=q->arr[q->f];
    }
    return a;
}

int main(){
    que q;
    q.size= 400;
    q.f= q.r= 0;
    q.arr= (int*)malloc(q.size*sizeof(int));

    // BFS implementation
    int node;
    int i=0;
    int visited[7]={0,0,0,0,0,0,0};
    int a[7][7]={
        {0,1,1,1,0,0,0},
        {1,0,1,0,0,0,0},
        {1,1,0,1,1,0,0},
        {1,0,1,0,1,0,0},
        {0,0,1,1,0,1,1},
        {0,0,0,0,1,0,0},
        {0,0,0,0,1,0,0}
    };

    printf("%c ",i+65);
    visited[i]=1;
    enque(&q,i); // enque i for exploration
    while(!isEmpty(&q)){
        int node = deque(&q);
        for(int j=0;j<7; j++){
            if(a[node][j]==1 && visited[j]==0){
                printf("%c ",j+65);
                visited[j]=1;
                enque(&q,j);
            }
        }
    }
    return 0;
}
