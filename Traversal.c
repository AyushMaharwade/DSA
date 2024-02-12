#include <stdio.h>

int Display(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        printf("%d\n",arr[i]);
    }
}

int main(){
    int arr[]={4,67,3,76,346,56,34};
    int size=sizeof(arr)/sizeof(int);
    int show= Display(arr,size);
}