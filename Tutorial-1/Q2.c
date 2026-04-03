//2.Write a program to add two numbers statically (static values assigned to variables ) and dynamically ( number is input from the users).

#include <stdio.h>
void main(){
 //Static addition
 int a=1,b=2;
 printf("%d + %d = %d",a,b,a+b);
 
 //Dynamic addition
 int c,d;
 printf("Enter the first number : ");
 scanf("%d",&c);
 printf("Enter the second number : ");
 scanf("%d",&d);
 printf("%d + %d = %d",c,d,c+d);
}
