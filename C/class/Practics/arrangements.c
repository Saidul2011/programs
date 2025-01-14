#include<stdio.h>
#include<stdlib.h>

void main(){
    char arr[]={'A','B','C'};
    for (int i = 0; i <(sizeof(arr)/sizeof(arr[0])); i++)
    {
        for(int j=0; j <(sizeof(arr)/sizeof(arr[0])); j++ )
        {   
            if(j==i) continue;
            for(int k=0; k <(sizeof(arr)/sizeof(arr[0])); k++ )
            {
                if(k==i || k==j) continue;
                printf("%c %c %c\n",arr[i],arr[j],arr[k]);
            }
        }
    }
    
}