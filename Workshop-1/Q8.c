//8.	Create a vending machine algorithm in C. For this program, you will need to start with 3 variables: one is the input (money put into the machine), the cost (product/s total), and the change to be dispensed. Your program should print out the coin value and coin amount for the change. For example, if my input was 250 pence (£2.50), the cost is 167 pence (£1.97),and  the change is 53p. 

#include<stdio.h>
void main(){
 int item_number,input,change,cost;
 while(1){
  cost =0;
  printf("What do you want : \n1.Chips \n2.Kit Kat \n3.Oreos \n4.Coke \n5.Water\n");
  scanf("%d",&item_number);
  switch(item_number){
   case 1:
    cost=167;
    break;
   case 2:
    cost=241;
    break;
   case 3:
    cost=80;
    break;
   case 4:
    cost=599;
    break;
   case 5:
    cost=99;
    break;
   default:
    printf("Invalid item number.\n");
  }
  if(cost==0){
   continue;
  }
  printf("Price : %d\n",cost);
  break;
  }
  
  while(1){
   printf("Insert money : ");
   scanf("%d",&input);
   if(input<cost){
    printf("Insufficient money\n");
    continue;
   }
   break;
  }
  change=input-cost;
  printf("Your change : %d pence.\n",change);
 }
