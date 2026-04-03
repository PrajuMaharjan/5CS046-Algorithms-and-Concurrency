//6.Write a program to print whether the value is an odd number or an even number. 

#include<stdio.h>
void main(){
 int num[2];
 printf("Enter two numbers : ");
 scanf("%d%d",&num[0],&num[1]);
 
 for(int i=0;i<2;i++){
  if(num[i]%2==0){
   printf("%d is an even number.\n",num[i]);
  }else{
   printf("%d is an odd number.\n",num[i]);
  }
 }
printf("\n");
}
