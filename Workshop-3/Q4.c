// 4.Write a C program to implement the “Bubble sort” algorithm to sort a string into alphabetical order. 

#include<stdio.h>

void bubble_sort(int arr[]){
 int temp;
 for(int i=0;i<10;i++){
  for(int j=0;j<=(10-i-1);j++){
   if(arr[j]>arr[j+1]){
    temp=arr[j];
    arr[j]=arr[j+1];
    arr[j+1]=temp;
   }
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

 bubble_sort(arr);

 printf("\n");
 return 0;
}
