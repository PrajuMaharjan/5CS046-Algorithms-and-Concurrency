//3.Write a C program to read n elements into an array and compute the sum of all elements using pointers. 

#include <stdio.h>

int compute_sum(int *pointer,int n){
 int sum=0;
 for(int i=0;i<n;i++){
  sum=sum+*(pointer+i);
 }
 return sum;
}

int main(){
 int n,result;
 
 printf("How many integers : ");
 scanf("%d",&n);
 
 int arr[n];
 int *pointer=arr;
 
 for(int i=0;i<n;i++){
  printf("Enter number no. %d : ",(i+1));
  scanf("%d",(pointer+i));
 } 
 result=compute_sum(pointer,n);
 printf("Sum of the entered numbers : %d.",result);

 printf("\n");
 return 0;
}
