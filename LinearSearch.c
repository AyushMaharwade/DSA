#include <stdio.h>

int linearSearch(int arr[],int size,int element){
    for (int i = 0; i < size; i++){
        if (arr[i]==element)
        {
            return i;
        }
        
    }
    return -1;
}

int main(){
    int array[]={2,3,6,48,90,49,29,70};
    int size=sizeof(array)/sizeof(int);
    int element;
    printf("Enter number to be searched at array:");
    scanf("%d",&element);
    int search=linearSearch(array,size,element);
    
    if(search!=-1){
        printf("The element %d found at index %d",element,search);
    }else{
        printf("element was not found");
    }
    return 0;
}
