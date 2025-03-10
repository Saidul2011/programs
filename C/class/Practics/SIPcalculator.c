#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    float fv=0;
    int p=5000;
    float r=12;
    

    for (int i = 0; i < 24; i++)
    {
        fv= (fv+p) * pow(1+(r/(12*100)),24);
    }

    printf("%f",fv);
    
}