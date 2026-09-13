// Find the sum of all elements in an array.
#include<stdio.h>
int array_sum(int arr[] , int size){
    int sum =0 ;
    for(int i =0; i<size; i++){
        sum = sum + arr[i];
    }
    return sum;
}
int main(){
    int size;
    printf("enter the size of the array \n");
    scanf("%d", &size);
    int arr[size];
    for(int i =0; i<size; i++){
        printf("enter the value in the index %d:\n", i+1);
        scanf("%d", &arr[i]);
    }
    int sum = array_sum(arr, size);
    printf("the sum of the array element is : %d ", sum);
    return 0;
}