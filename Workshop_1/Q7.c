// 7.Create a program to ask a user for a number, then check if this is a prime number. 
// a.Extend this program by continuingly asking the user for a number until they type in a prime number to end the script

#include <stdio.h>
#include <stdbool.h>

void main(){
 int num;
 
 while(1){
 bool is_prime=true;
 
 printf("Enter a prime number to end this program:");
 scanf("%d",&num);
 if(num<=1){
   printf("%d is not a prime number.\n",num);
   continue;
 }
 for(int i=2;i*i<=num;i++){
  if(num%i==0){
   printf("%d is not a prime number.\n",num);
   is_prime=false;
   break;
 }
}
 if(is_prime){
  printf("%d is a prime number.\n",num);
  break;
 }
}
}
