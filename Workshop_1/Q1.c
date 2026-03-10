//1.Create a program to classify a student’s grade into 3rd, 2:2, 2:1, and first from taking in a percentage number (integers). 3rd is <50, 2:2 is <60, 2:1 is <70 and first is >=70. 

#include<stdio.h>
void main(){
  int percentage;
  char choice;
  while(1){
  printf("Enter your percentage :");
  scanf("%d",&percentage);
  
  if(percentage>=70 && percentage<=100){
    printf("You are first.");
   }else if(percentage>=60 && percentage<70){
    printf("You are 2:1.");
   }else if(percentage>=50 && percentage<60){
    printf("You are 2:2.");
   }else if(percentage>=0 && percentage<50){
    printf("You are 3rd.");
   }else{
    printf("Invalid input");
   }
   printf("\nPress n to end.");
   scanf(" %c",&choice);
   if(choice=='n'){
     break;
   }
  }
  printf("\n");
  
}
