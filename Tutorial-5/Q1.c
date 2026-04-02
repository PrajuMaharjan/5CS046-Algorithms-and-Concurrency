// 1.Create a user defined datatype.

#include<stdio.h>

struct Student{
 int roll;
 char grade;
}std;

int main(){
 printf("Size of structure : %ld.",sizeof(std));
 
 printf("\n");
 return 0;
}
