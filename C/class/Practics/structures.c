#include<stdio.h>
    struct details { int age; char gender;} d;  

    struct family{
        char *name;
        struct details d;
    
    };

void main(){
   struct family my;
   
   
   my.name="masud";
   my.d.age=27;
   my.d.gender='M';

   printf("%s\n",my.name);
   printf("%d\n",my.d.age);
   printf("%c\n",my.d.gender);
   
   
   
}