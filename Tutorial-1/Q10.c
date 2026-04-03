//10.Write a program to print the multiplication table of the user-given number.

#include<stdio.h>
void main(){
 int num;
 printf("Enter a number : ");
 scanf("%d",&num);
 printf("Multiplication table of %d\n",num);
 for(int i=1;i<=10;i++){
  printf("%d x %d = %d.\n",num,i,num*i);
 }
 printf("\n");
}
