//5.	Create a simple login system with a fixed pin. Create an integer called pin and set this to any 4-digit number. Then ask the user to type in a value; if this does not match, the user is given another 5 attempts. Your program should also log how many attempts it took to get the user to type in the correct pin.

#include<stdio.h>
#include<stdbool.h>

void main(){
 int fixed_pin=2006;
 int pin;
 bool logged_in=false;
 
 for(int i=4;i>=0;i--){
 printf("Enter your PIN : ");
 scanf("%d",&pin);
 if(pin==fixed_pin){
  printf("Successfully logged in in %d attempts\n",5-i);
  logged_in=true;
  break;
 }else{
  printf("Incorrect PIN. You have %d attempts left.\n",i);
 }
}

if(!logged_in){
 printf("You have been locked out for too many incorrect PIN attempts.");
 }
 printf("\n");
 }
