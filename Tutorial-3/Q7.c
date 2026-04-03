//7.Write a C program to dynamically allocate memory for an integer, a float, and a character at runtime and display their values. 

#include <stdio.h>
#include <stdlib.h>

int main(){
 int *ptr1;
 float *ptr2;
 char *ptr3;
 
 ptr1=(int*) malloc(10*sizeof(int));
 ptr2=(float*) malloc(12*sizeof(float));
 ptr3=(char*) malloc(4*sizeof(char));

 printf("Memory allocated to int : %ld",10*sizeof(int));
 printf("\nMemory allocated to float : %ld",12*sizeof(12));
 printf("\nMemory allocated to char : %ld",4*sizeof(char));
 
 printf("\n");
 return 0;
}
