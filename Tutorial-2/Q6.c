//6.	Write a void function which takes one integer (n) as a parameter. Your function should then print out all triangular numbers from 1 up to the nth term. You will need to research the formula to find triangular numbers. 

#include<stdio.h>

void triangular_numbers(int n){
 printf("First %d triangular numbers : \n",n);
 for(int i=1;i<=n;i++){
  int tn=(i*(i+1))/2;
  printf("%d\n",tn);
 }
}

int main(){
 int n;
 printf("Enter a number : ");
 scanf("%d",&n);
 triangular_numbers(n);
 
 printf("\n");
 return 0;
}
