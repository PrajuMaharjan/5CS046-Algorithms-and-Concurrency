//4.Write a C program to read n integers into an array and find the largest element using pointers. 

#include<stdio.h>

int largest_element(int *pointer,int n){
 int largest=*pointer;
 for(int i=1;i<n;i++){
  if(*(pointer+i)>largest){
   largest=*(pointer+i);
  }
 }
 return largest;
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
 result=largest_element(pointer,n);
 printf("Largest element : %d.",result);

 printf("\n");
 return 0;
}
