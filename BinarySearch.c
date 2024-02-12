#include <stdio.h>

int BinarySearch(int arr[], int size, int element)
{
    int low=0, mid, high=size-1;

    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }
        if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
    
}

int main(){
    int arr[]={1,5,10,15,20,50,100,250,500,700,1000};
    int size =sizeof(arr)/sizeof(arr[0]);
    int element;
    printf("Enter the element to be found:");
    scanf("%d",&element);
    int search= BinarySearch(arr,size,element);

    if(search!=-1){
        printf("The element %d found at index %d",element,search);
    }else{
        printf("element was not found");
    }
    return 0;
    
}
