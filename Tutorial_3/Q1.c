// 1.Write a C program that swaps two integer variables using two approaches: 
// a) pass by value 
// b) pass by reference using pointers. 

#include <stdio.h>

void pass_by_value(int num1,int num2){
 int temp;
 printf("Before swapping (Values in swap function) : \n a = %d b = %d . \n",num1,num2);
 
 temp=num1;
 num1=num2;
 num2=temp;
 
 printf("After swapping (Values in swap function): \n a = %d b = %d . \n",num1,num2);
}

void pass_by_reference(int *num1,int *num2){
 int temp;
 printf("Before swapping (Values in swap function) : \n a = %d b = %d . \n",*num1,*num2);
 
 temp=*num1;
 *num1=*num2;
 *num2=temp;
 
 printf("After swapping (Values in swap function): \n a = %d b = %d . \n",*num1,*num2);
}

int main(){
 int a=10,b=20;
 
 printf("===== Swapping by pass by value =====\n \n ");
 printf("Before swapping (Values in main function) : \n a = %d b = %d . \n",a,b);
 pass_by_value(a,b);
 printf("After swapping (Values in main function): \n a = %d b = %d . \n",a,b);
 
 printf("===== Swapping by pass by reference =====\n \n ");
 printf("Before swapping (Values in main function) : \n a = %d b = %d . \n",a,b);
 pass_by_reference(&a,&b);
 printf("After swapping (Values in main function): \n a = %d b = %d . \n",a,b);
 
 printf("\n");
 return 0;
 
}
