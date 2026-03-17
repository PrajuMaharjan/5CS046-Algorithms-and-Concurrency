// 3.Write a recursive C program that finds the sum of the first N natural numbers. 

#include <stdio.h>

int sum_first_n_numbers(int n){
 if(n==0){
  return 0;
 }
 else{
  return n+sum_first_n_numbers(n-1);
 }
}

int main(){
 int n;
 printf("Enter a number : ");
 scanf("%d",&n);
 int sum_n=sum_first_n_numbers(n);
 printf("Sum of first %d numbers = %d.",n,sum_n);
 
 printf("\n");
 return 0;
}
