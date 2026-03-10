// 6.Ask the user for “n” and print the first n Fibonacci numbers

#include<stdio.h>
void main(){
 int n,a=0,b=1,c;
 printf("Enter how many numbers : ");
 scanf("%d",&n);
 printf("First %d Fibonacci numbers : \n",n);
 printf("%d \t %d",a,b);
 for(int i=2;i<n;i++){
   c=a+b;
   printf("\t%d",c);
   a=b;
   b=c;
 }
 printf("\n");
}
