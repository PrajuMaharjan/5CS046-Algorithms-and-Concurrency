// 1.Write a void function which takes in two integers as parameters. The function will sum the two numbers and print the answer.

#include <stdio.h>

void add_2_numbers(int a,int b){
 int sum=a+b;
 printf("%d + %d = %d",a,b,sum);
}

void main(){
 int num1,num2;
 printf("Enter a number : ");
 scanf("%d",&num1);
 printf("Enter another number : ");
 scanf("%d",&num2);
 add_2_numbers(num1,num2);
 printf("\n");
}
