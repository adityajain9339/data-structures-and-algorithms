#include <stdio.h>
// Reverse an array
// Given an array arr of n elements. The task is to reverse the given array.
// The reversal of array should be inplace.

void reverse(int arr[], int n)
{
    for(int i =0;i< n/2;i++){
        int temp = arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]= temp;
    }
}
void reverseArray(int arr[], int start, int end) {
    while (start < end) {
        // Swap the elements
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        
        // Move the pointers towards the center
        start++;
        end--;
    }
}
int main()
{
    int arr[]={1,2,3,4,5};
    reverse(arr,5);
    for(int i=0;i<5;i++){
        printf("%d ", arr[i]);
    }

}