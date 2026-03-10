//3.Create a program that uses a while loop to print the first 50 triangular numbers. 

#include<stdio.h>
void main(){
 printf("First 50 triangular numbers : \n");
 for(int i=1;i<=50;i++){
  int tn=(i*(i+1))/2;
  printf("%d\n",tn);
 }
 printf("\n");
}
