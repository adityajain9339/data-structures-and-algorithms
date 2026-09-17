#include<stdio.h>
int second_largest(int arr[], int size){
    if (size< 2) {
        printf("Array must have at least two elements.\n");
        return -1;
    }
    int first , second ;
    first= second=arr[1];
    for(int i =2 ; i<size;i++){
        if(arr[i]>first){
            second= first;
            first= arr[i];
        }
        else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }
    return second;
}
int main()
{
    int size;
    printf("enter the size of the array \n");
    scanf("%d", &size);
    if (size <= 0)
    {
        printf("Invalid array size.\n");
        return 1;
    }
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        printf("enter the value in the index %d:\n", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("array you inserted is : \n ");
    for (int i = 0; i < size; i++)
    {
        printf("%d \n ", arr[i]);
    }
    int a = second_largest(arr,size);
    
    
    

}