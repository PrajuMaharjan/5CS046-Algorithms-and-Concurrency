//4.	Declare an array of at least 11 integers; the numbers can be random, so you can choose them. Create a program to loop through that list and print the:
//a.	Smallest value
//b.	Largest value
//c.	Average (use float or double)

#include<stdio.h>
void main(){
 int numbers[11],smallest,largest,sum=0;
 float average;
 
 printf("Enter 11 integers.\n");
 for(int i=0;i<=10;i++){
  printf("Number %d : ",i+1);
  scanf("%d",&numbers[i]);
  printf("\n");
 }
 smallest=numbers[0];
 largest=numbers[0];
 for(int i=1;i<=10;i++){
  if(numbers[i]>largest){
  largest=numbers[i];
  }
  if(numbers[i]<smallest){
  smallest=numbers[i];
  }
  sum=sum+numbers[i];
 }
 
 average=sum/11;
 printf("Smallest value : %d",smallest);
 printf(" \nLargest value : %d",largest);
 printf(" \nAverage value : %f",average);
 
 printf("\n");
}
