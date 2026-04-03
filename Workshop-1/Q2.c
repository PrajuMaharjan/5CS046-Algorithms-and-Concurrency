// 2.Build on question one by using a list of percentages (integers) and classify all grades.

#include<stdio.h>
void main(){
  int n;
  printf("Enter how many grades:");
  scanf("%d",&n);
  
  int percentages[n];
  for(int i=0;i<n;i++){
  printf("Enter percentage of student number : %d :",i+1);
  scanf("%d",&percentages[i]);
  }
  
  for(int i=0;i<n;i++){
  if(percentages[i]>=70 && percentages[i]<=100){
    printf("Percentage classification of student number %d: First.\n",i+1);
   }else if(percentages[i]>=60 && percentages[i]<70){
    printf("Percentage classification of student number %d: 2:1.\n",i+1);
   }else if(percentages[i]>=50 && percentages[i]<60){
    printf("Percentage classification of student number %d: 2:2.\n",i+1);
   }else if(percentages[i]>=0 && percentages[i]<50){
    printf("Percentage classification of student number %d: 3rd.\n",i+1);
   }else{
    printf("Invalid input\n");
   }
  }
  printf("\n");
  }
