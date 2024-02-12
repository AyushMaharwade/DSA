#include <stdio.h>
#include <stdlib.h>

struct ADT_Array
{
    int Total_space;
    int Used_space;
    int *ptr;
};

void create_array(struct ADT_Array * a,int t_size,int u_size){
    // (*a).Total_space=t_size;
    // (*a).Used_space=u_size;
    // (*a).ptr=(int *)malloc(t_size * sizeof(int));

    // or this can be also written as

    a->Total_space=t_size;
    a->Used_space=u_size;
    a->ptr=(int *)malloc(t_size * sizeof(int));
};

void setval(struct ADT_Array * a){
    int n;
    for (int i = 0; i < a->Used_space; i++)
    {
        printf("enter elements %d :",i);
        scanf("%d",&n);
        (a->ptr)[i]=n;
    }
};

void display(struct ADT_Array * a){
    for (int i = 0; i < a->Used_space; i++)
    {
        printf("%d \n",(a->ptr)[i]);
    }
        printf("display complete...");
    
};

int main(){
    struct ADT_Array marks;
    create_array(&marks,10,5);
    setval(&marks);
    display(&marks);
};