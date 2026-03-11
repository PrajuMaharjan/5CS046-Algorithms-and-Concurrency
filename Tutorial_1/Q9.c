//9.Write a program to print the odd and even numbers from 1 to 100.

#include<stdio.h>
void main(){
 printf("Odd numbers\tEven numbers\n");
 for(int i=1;i<=100;i++){
  if(i%2==0){
  printf("\t\t\t%d \n",i);
  }else{
  printf("%d",i);
  }
 }
 printf("\n");
}
