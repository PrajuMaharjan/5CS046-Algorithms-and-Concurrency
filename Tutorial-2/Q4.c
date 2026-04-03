// 4.Write a function to return the sum from 1 to a value specified by the single parameter of a function. For example, function(9) should return 45 as this is 
//1+2+3+4+5+6+7+8+9 

#include<stdio.h>

int sum1(int num){
 int num_to_return=0;
 
 for(int i=1;i<=num;i++){
  num_to_return=num_to_return+i;
 }
 return num_to_return;
}

int main(){
 int a,output;
 printf("Enter a number : ");
 scanf("%d",&a);
 output=sum1(a);
 printf("The sum of the numbers from 1 to %d is %d.",a,output);
 
 printf("\n");
}
