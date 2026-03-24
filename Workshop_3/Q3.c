//3. Write a C program to implement the “selection sort” algorithm to sort an integer array. 

#include<stdio.h>

void selection_sort(int arr[]){
 for(int i=0;i<10;i++){
  int index_of_smallest_number=i;
  
  for(int j=i+1;j<10;j++){
   if(arr[j]<arr[index_of_smallest_number]){
    index_of_smallest_number=j;
   }
   int temp=arr[index_of_smallest_number];
   arr[index_of_smallest_number]=arr[i];
   arr[i]=temp;
  }
 }
 printf("\nThe sorted array : \n");
 for(int i=0;i<10;i++){
 printf("%d ",arr[i]);
 }

}

int main(){
 int arr[10]={7,5,3,4,8,1,6,10,9,2};
 
 printf("The unsorted array : \n");
 for(int i=0;i<10;i++){
 printf("%d ",arr[i]);
 }
 
 selection_sort(arr);
 
 printf("\n");
 return 0;
}
