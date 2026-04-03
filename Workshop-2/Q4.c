// 4.Write a C program that searches for a number in a sorted array using binary search. 

#include <stdio.h>

int binary_search(int arr[],int number,int size){
 int low=0,high=size-1;
 while(low<=high){
  int mid=low+(high-low)/2;
  
  if(arr[mid]==number){
   return mid;
  } 
  if(arr[mid]<number){
   low=mid+1;
  }else{
   high=mid-1;
  }
 }
 
 return -1;
}

int main(){
 int arr[]={2,4,6,8,10,12,14,16,18,20};
 int n;
 int size=sizeof(arr)/sizeof(arr[0]);
 printf("Enter a number to search : ");
 scanf("%d",&n);
 int index=binary_search(arr,n,size);
 if(index==-1){
   printf("The number is not in the array.");
  }else{
   printf("The number is at index %d",index);
  }
 
 printf("\n");
 return 0;
}
