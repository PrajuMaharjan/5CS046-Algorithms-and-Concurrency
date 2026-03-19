//8.Write a C program that reads an integer n, dynamically allocates memory for n integers, and passes the pointer to a function that returns the sum of the elements. 

#include<stdio.h>
#include<stdlib.h>

int sum_n(int *ptr,int n){
 int sum=0;
 
 for(int i=0;i<n;i++){
  sum=sum+*(ptr+i);
 }
 return sum;
}

int main(){
 int *ptr,n,sum;
 
 printf("Enter how many integers : ");
 scanf("%d",&n);
 
 ptr=(int*) malloc(n*sizeof(int));
 
 for(int i=0;i<n;i++){
  printf("\nEnter integer no. %d : ",i+1);
  scanf("%d",(ptr+i));
 }
 
 sum=sum_n(ptr,n);
 printf("Sum = %d",sum);
 
 printf("\n");
 return 0;
}
