//8.Write a function called primes(int n) that returns a dynamically allocated array containing the first n prime numbers. For example, if you call primes(5), it should return an array containing: 2, 3, 5, 7, 11.

#include <stdio.h>
#include <stdlib.h>

int prime_check(int num){
    if(num<=1) return 0;
    
    for(int i=2;i*i<=num;i++){
        if(num%i==0)
        	return 0;
    }
    return 1;
}

int* primes(int n){
    int *arr=(int*)malloc(n*sizeof(int));
    int count=0;
    int num=2;

    while(count<n){
        if(prime_check(num)){
            arr[count]=num;
            count++;
        }
        num++;
    }
    return arr;
}

int main(){
    int n;
    printf("Enter how many prime numbers you want : ");
    scanf("%d",&n);

    int *p=primes(n);
    if(p!=NULL){
        printf("First %d prime numbers:\n",n);
        for(int i=0;i<n;i++){
            printf("%d ",p[i]);
        }
        free(p);
    }
    
    printf("\n");
    return 0;
}
