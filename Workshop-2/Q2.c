// Write a C program to implement linear search using a function. 

#include <stdio.h>

int linear_search(int input,int sizeofarr,int numarr[]){
 for(int i=0;i<sizeofarr;i++){
  if (numarr[i]==input){
   return i;
  }
 }
 return -1;
}

int main(){
 int arr[]={10,20,30,40,50,60,70,80,90,100};
 int size=sizeof(arr)/sizeof(arr[0]);
 int num;
 
 printf("Which number do you want to search for in the array : ");
 scanf("%d",&num);
 int index=linear_search(num,size,arr);
 if(index==-1){
  printf("Number does not exist in the array.");
 }else{
  printf("Number found at index %d of the array.",index);
 }
 
 printf("\n");
 return 0;
}
