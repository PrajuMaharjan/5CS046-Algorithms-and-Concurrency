// 1.Write a program that counts how many times a number appears in an array. 

#include <stdio.h>

int num_count(int numbers[], int num,int size){
  int count=0;
  for(int i=0;i<size;i++){
   if(numbers[i]==num){
    count=count+1;
   } 
}
 return count;
}

int main(){
 int numbers[]={1,2432,2436,1234,63462,1,463638,235342,75332,564332,5433,1,43,235,157};
 int num,count;
 int sizeofarr=sizeof(numbers)/sizeof(numbers[0]);
 
 printf("Which number do you want to count : ");
 scanf("%d",&num);
 count=num_count(numbers,num,sizeofarr);
 printf("The number %d appears in the array %d times.",num,count);
 printf("\n");
 return 0;
}
