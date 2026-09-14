#include <stdio.h>
void selection_sort(int arr[], int size_of_array);
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
    selection_sort(arr, size);
    printf("array is printed after sorted : \n ");
    for (int i = 0; i < size; i++)
    {
        printf("%d \n ", arr[i]);
    }
}
void selection_sort(int arr[], int size_of_array)
{
    for (int i = 0; i <= size_of_array - 2; i++)
    {
        int min_index = i;
        for (int j = i + 1; j <= size_of_array - 1; j++)
        {
            if (arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }
        // Optimization #2 — Don't swap if the minimum is already i
        //     Did I find a NEW minimum?

        //        YES
        //         ↓
        //       Swap

        //        NO
        //         ↓
        //    Don't swap
        if (min_index != i)
        {
            int temp = arr[i];
            arr[i] = arr[min_index];
            arr[min_index] = temp;
        }
    }
}