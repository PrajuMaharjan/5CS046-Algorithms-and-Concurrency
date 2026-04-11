//4.	Write a structure to store the names, salary, and hours of work per day of 5 employees in a company. Write a program to increase the salary depending on the number of hours of work per day as follows and then print the name of all the employees along with their final salaries. To do this, you should create employees within the main, then check whether their hours fit within the boundaries below, if so, increase the salary.
// Hours of work per day	8	10	>=12
// Increase in salary		$50	$100	$150

#include <stdio.h>

typedef struct{
 char name[20];
 int salary;
 int work_hours;
} Employee;

int increase_salary(int hours,int salary){
 if(hours>=12){
  return salary+150;
 }else if(hours>=10){
  return salary+100;
 }else if(hours>=8){
  return salary+50; 
 }else{
  return salary;
 }
}

int main(){
 Employee e[5];
 int new_salary;
 
 for(int i=0;i<5;i++){
  printf("Enter name,salary,work hours for Employee No. %d : ",i+1);
  scanf(" %[^,],%d,%d",e[i].name,&e[i].salary,&e[i].work_hours);
 }
 
 printf("\nEmployee Details : \n");
 
 for(int i=0;i<5;i++){
  new_salary=increase_salary(e[i].work_hours,e[i].salary);
  printf("Name : %s\nOld Salary : %d\nWork Hours : %d\nNew Salary : %d\n",e[i].name,e[i].salary,e[i].work_hours,new_salary);
 }
 
 
 printf("\n");
 return 0;
}
