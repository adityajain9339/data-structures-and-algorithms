#include <stdio.h>
// largest element in the array..
// Given an array of integers nums, return the value of the largest element in the array
int largestElement(int arr[] ,int n)
{   if(n==0) return 0;
    int maxElement = arr[0];
    for(int i =1; i<n; i++){
        if(arr[i]>maxElement){
            maxElement= arr[i];
        }
    }
    return maxElement;
}

int main()
{
    int arr[2];
    printf("the largest elemnt in the array is %d", largestElement(arr,0));
}