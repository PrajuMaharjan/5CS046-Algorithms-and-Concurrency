// 2.	Write a C program that asks the user to enter a number between 1000 and 99999, dynamically allocates an integer array of that size using malloc, fills the array with random numbers using the time.h library, checks each number to determine if it is a prime number, prints all the prime numbers found, and finally frees the allocated memory. 

#include <stdio.h>
#include <time.h>
#include<stdlib.h>

int isPrime(int number){
 if(number<=1){
  return 0;
 }
 if(number==2){
  return 1;
 }
 
 for(int i=2;i*i<=number;i++){
  if(number%i==0){
   return 0;
  }
 }
 return 1;
}

int main(){
 int *ptr,n;
 srand(time(NULL));
 while(1){
  printf("Enter a number between 1000 and 99999 : ");
  scanf("%d",&n);
  if(n<1000 || n>99999){
   printf("Please enter a number between 1000 and 99999.\n");
   continue;
  }
  ptr=(int*) malloc(n*sizeof(int));
  
  for(int i=0;i<n;i++){
   *(ptr+i)=(rand() % 1000);
  }
  printf("The prime numbers in the array(numbers repeated) are : \n");
  for(int i=0;i<n;i++){
   if(isPrime(*(ptr+i))){
    printf("%d\n",*(ptr+i));
   }
  }
   
  free(ptr);
  break;
 }
 printf("\n");
 return 0;

}
