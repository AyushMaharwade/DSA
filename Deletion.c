#include <stdio.h>

int Deletion(int arr[],int size,int position){
    for (int i = position; i < size-1; i++)
    {
        arr[i]=arr[i+1];
    }
    
};

void Display(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
};

int main(){
    int arr[]={2,6,8,4,3,7};
    int size=sizeof(arr)/sizeof(int);
    int position=1;
    Display(arr,size);
    int del=Deletion(arr,size,position);
    size-=1;
    Display(arr,size);

};