#include<stdio.h>
#include<stdlib.h>
// Divisors of a Number
// You are given an integer n. You need to find all the divisors of n. Return all the divisors of n as an array or list in a sorted order.

// A number which completely divides another number is called it's divisor.
int *divisor(int n, int *count)
{   
    if(n <= 0) return 0;
    int *arr = malloc(n * sizeof(int));
    if (arr == NULL)
    {
    return NULL;
    }

    *count = 0;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            arr[*count] = i;
            (*count)++;
        }
    }
    return arr;
    free(arr);
}
int main(){
    int a ,b;
    printf("enter the number : ");
    scanf("%d",&a);
    printf("the Divisors of the number %d is:-",a);
    int  *arr = divisor(a,&b);
    for(int i =0 ; i< b;i++){
        printf("%d ",arr[i]);
    }
}