#include <stdio.h>
void selection_sort(int arr[], int size_of_array);
int main()
{
    int size;
    printf("enter the size of the array \n");
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf("enter the value in the index %d:\n", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("array is printed before shorted :");
    for(int i =0 ; i<size;i++){
        printf("%d \n ", arr[i]);
    }
    selection_sort(arr, size);
    printf("array is printed after shorted :");
    for(int i =0 ; i<size;i++){
        printf("%d \n ", arr[i]);
    }
}
void selection_sort(int arr[], int size_of_array){
    for(int i = 0; i<= size_of_array-2;i++){
        int min =i;
        for(int j =i ; j<= size_of_array-1 ;j++){
            if(arr[j]<arr[min]){
                min =j ;
            }
        }
    int temp = arr[i];
    arr[i]= arr[min];
    arr[min]= temp;
    }
}