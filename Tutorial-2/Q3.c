// 3.	Write a void function to convert a decimal number into a binary number. The function should take in one parameter (the decimal value (integer)). You will need to think about how to print this out, you ideally should use a character/integer array to store the result. For this question, restrict your output to 8 bits max to save time and memory.  

#include <stdio.h>
#include <string.h>

void decimal_to_binary(int number){
 char binary_num[8];
 int remainder,i=0,num=number;
 
 while(number!=0){
  remainder = number%2;
  binary_num[i]=remainder+'0';
  number=number/2;
  i++;
  }
 printf("Binary equivalent of %d = ",num);
 
 for(int j=i-1;j>=0;j--){
 printf("%c",binary_num[j]);
 }
 }

int main(){
 int num;
 
 printf("Enter an integer : ");
 scanf("%d",&num);
 decimal_to_binary(num);
 
 printf("\n");
}
