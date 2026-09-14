#include <stdio.h>
void bubble_sort(int arr[], int size_of_array);
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
    printf("array is printed before sorted : \n ");
    for (int i = 0; i < size; i++)
    {
        printf("%d \n ", arr[i]);
    }
    bubble_sort(arr, size);
    printf("array is printed after sorted : \n ");
    for (int i = 0; i < size; i++)
    {
        printf("%d \n ", arr[i]);
    }
}
void bubble_sort(int arr[], int size_of_array)
{
    for (int i = size_of_array - 1; i >= 1; i++)
    {
        int cheak_swap = 0;
        for (int j = 0; j <= i; i++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
                cheak_swap = 1;
            }
        }
        if (cheak_swap == 0)
        {
            break;
        }
    }
}