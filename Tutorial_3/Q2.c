//2.Write a C program to read n integers from the user, store them in an array, and print the elements using pointers. 

#include <stdio.h>

void print_by_pointer(int *ptr,int n){
 printf("The numbers you entered are : \n");
 
 for(int i=0;i<n;i++){
  printf("%d \t",*(ptr+i));
 }
}

int main(){
 int n;
 
 printf("How many numbers to enter : ");
 scanf("%d",&n);
 
 int arr[n];
 int *pointer=arr;
 
 for(int i=0;i<n;i++){
  printf("Enter number no. %d : ",(i+1));
  scanf("%d",(pointer+i));
 }
 print_by_pointer(pointer,n);

 printf("\n");
 return 0;
}
