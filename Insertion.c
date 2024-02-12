#include <stdio.h>

int Insertion(int arr[],int size,int element,int position,int capacity){

    // shifting elements for new element
    if (size>=capacity){
        return -1;
    }
   
    for (int i = size-1; i >= position; i--)
    {
        arr[i+1]=arr[i];
    }

    // Inserting element
    arr[position]=element;   
    return 1;
}

int Display(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void get_value(int arr[],int *size,int *element,int *position){

    printf("Enter size of array:");
    scanf("%d",size);

    for (int i = 0; i < *size; i++)
    {
        printf("Enter %d elements:",*size);
        scanf("%d",&arr[i]);
    }
    
    printf("enter element to insert:");
    scanf("%d",element);

    printf("enter posititon of the array:");
    scanf("%d",position);   
};

int main(){
    int arr[100];
    int size;
    int element;
    int position;
    int capacity=100;

    get_value(arr,&size,&element,&position);
    Display(arr,size);
    int insert=Insertion(arr,size,element,position,capacity);
    size+=1;
    Display(arr,size);
    return 0;
}                                            