//3.Write a program to print the simple interest with values p, t, and r given by the user, where p is an integer, t is an integer, r is a float, and the interest is a float. 

#include<stdio.h>
void main(){
 int p,t;
 float r,interest;
 
 printf("Enter principal amount : ");
 scanf("%d",&p);
 printf("\nEnter time : ");
 scanf("%d",&t);
 printf("\nEnter rate of interest : ");
 scanf("%f",&r);
 
 interest=(p*t*r)/100;
 
 printf("Simple interest = %f",interest);
}
