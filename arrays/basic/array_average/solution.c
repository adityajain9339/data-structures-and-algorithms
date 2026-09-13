// Find the average of elements in an array.
#include<stdio.h>
int array_average(int arr[] , int size){
    int sum =0 ;
    for(int i =0; i<size; i++){
        sum = sum + arr[i];
    }
    return ( float )sum  / size;
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
    float average = array_average(arr, size);
    printf("the average of the array element is : %.2f ", average);
    return 0;
}