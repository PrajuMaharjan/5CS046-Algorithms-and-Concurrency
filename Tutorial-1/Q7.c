//7.Write a program to find the greatest of two numbers and the greatest of three numbers. 

#include<stdio.h>
void main(){
 int g2_1,g2_2,g3_1,g3_2,g3_3;
 
 printf("Enter two numbers : ");
 scanf("%d%d",&g2_1,&g2_2);
 if(g2_1>g2_2){
  printf("%d is greater.\n",g2_1);
 }else{
  printf("%d is greater.\n",g2_2);
 }
  
 printf("Enter three numbers : ");
 scanf("%d%d%d",&g3_1,&g3_2,&g3_3);
 if(g3_1>g3_2 && g3_1>g3_3){
  printf("%d is greatest.",g3_1);
 }else if(g3_2>g3_1 && g3_2>g3_3){
  printf("%d is greatest.",g3_2);
 }else{
  printf("%d is greatest.",g3_3);
 }
 printf("\n");
}
