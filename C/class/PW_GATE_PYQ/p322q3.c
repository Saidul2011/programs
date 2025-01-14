#include<stdio.h>
int MyX(int *E, unsigned int size){
    int Y=0;
    int Z;
    int i,j,k;
    for(i=0; i<size; i++){
        Y=Y+E[i];
    }

    for(i=0; i<size; i++)
        for(j=0; j<size; j++){
            Z=0;
            for(k=0; k<size; k++)
                    Z=Z+E[k];
            if(Z>Y)
                    Y=Z;
        }

    return Y;
}

void main(){
    int size;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    int E[size];

    printf("Enter elements : ");
    for (size_t i = 0; i < size; i++)
    {
        scanf("%d",&E[i]);
    }

    int Y=MyX(E,size);
    printf("\n %d ",Y);
    
}