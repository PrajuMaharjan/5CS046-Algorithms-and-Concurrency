//6.Write a C program to read n elements into an array and print the array elements in reverse  order using pointers. 

#include<stdio.h>

void reverse_print(int *pointer,int n,int size){
 printf("The elements of the array in reverse order : \n");
 for(int i=size-1;i>=0;i--){
   printf("%d\t",*(pointer+i));
  }
}

int main(){
 int n;

 printf("How many integers : ");
 scanf("%d",&n);

 int arr[n];
 int *pointer=arr,size=sizeof(arr)/sizeof(arr[0]);

 for(int i=0;i<n;i++){
  printf("Enter number no. %d : ",(i+1));
  scanf("%d",(pointer+i));
 }

 reverse_print(pointer,n,size);

 printf("\n");
 return 0;
}
