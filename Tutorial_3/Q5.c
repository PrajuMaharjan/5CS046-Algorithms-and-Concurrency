//5.Write a C program to read n elements into an array and search for a given element using pointers. 

#include<stdio.h>

int search(int *pointer,int n,int element_to_search){
 for(int i=0;i<n;i++){
  if(*(pointer+i)==element_to_search){
  	return i;
   }
  }
 return -1;
}

int main(){
 int n,element_to_search,result;

 printf("How many integers : ");
 scanf("%d",&n);

 int arr[n];
 int *pointer=arr;

 for(int i=0;i<n;i++){
  printf("Enter number no. %d : ",(i+1));
  scanf("%d",(pointer+i));
 }
 
 printf("What element do you want to search for : ");
 scanf("%d",&element_to_search);
 
 result=search(pointer,n,element_to_search);
 if (result==-1){
  printf("Element %d does not exist in the array.",element_to_search);
 }else{
 printf("The element %d is at index %d of the array.",element_to_search,result);
 }
 
 printf("\n");
 return 0;
}
