//4. Write a program to convert degree celsius to fahrenheit and degree fahrenheit to degree celsius. 

#include<stdio.h>
#include<stdbool.h>

void main(){
 char choice;
 float temp;
 
 while(true){
 printf("What do you want to convert : \n1.Celsius to Fahrenheit\n2.Fahrenheit to Celsius\n");
 scanf(" %c",&choice);
 if(choice=='1'){
  printf("Enter temperature in celsius : ");
  scanf("%f",&temp);
  printf("%f° Celsius = %f° Fahrenheit\n",temp,temp*1.8+32);
 }else if(choice=='2'){
  printf("Enter temperature in fahrenheit : ");
  scanf("%f",&temp);
  printf(" \n%f° Fahrenheit = %f° Celsius\n",temp,(temp-32)/1.8);
 }else{
  printf("Please select valid option\n");
  continue;
 }
 printf("Press s to stop. Press any other character to continue.\n");
 scanf(" %c",&choice);
 if(choice=='s'){
  break;
 }
 }
 printf("\n");
}
