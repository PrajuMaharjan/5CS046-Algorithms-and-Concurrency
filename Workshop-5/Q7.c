// 7.In the lecture you were shown how to use arrays and malloc (). Write a function fibonacci(int size) that returns a dynamically allocated array containing the first “size” Fibonacci numbers. For example, if you call fibonacci(5), it should return an array containing: 0, 1, 1, 2, 3.

#include <stdio.h>
#include <stdlib.h>

int* fibonacci(int size){
    int *arr=(int*)malloc(size*sizeof(int));

    if(size>=1)arr[0]=0;
    if(size>=2)arr[1]=1;
    
    for(int i=2;i<size;i++){
        arr[i]=arr[i-1]+arr[i-2];
    }
    return arr;
}

int main(){
    int n;
    printf("Enter how many elements: ");
    scanf("%d",&n);

    int *fib=fibonacci(n);

    if(fib!=NULL){
        printf("Fibonacci series upto %d terms : \n",n);
        for(int i=0;i<n;i++){
            printf("%d ",fib[i]);
        }
        free(fib);
    }
    
    printf("\n");
    return 0;
}
