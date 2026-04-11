//5.Complete question 4 but using a separate function and pass in the struct which contains the employee information, this will be a pointer. You only need to pass in one struct, not multiple structs (i.e., only one employee). You will need to think back to the lecture regarding pointers to change the original values from the original address where the employee was created.

#include <stdio.h>

typedef struct{
 char name[20];
 int salary;
 int work_hours;
} Employee;

int increase_salary(Employee *e){
 if(e->work_hours>=12){
  return e->salary+=150;
 }else if(e->work_hours>=10){
  return e->salary+=100;
 }else if(e->work_hours>=8){
  return e->salary+=50;
 }
}

int main(){
 Employee e[5];
 int old_salary;
 
 for(int i=0;i<5;i++){
 	printf("Enter name,salary,work_hours for Employee No. %d : ",i+1);
 	scanf(" %[^,],%d,%d",e[i].name,&e[i].salary,&e[i].work_hours);
 }

 printf("\nEmployee Details : \n");

 for(int i=0;i<5;i++){
  old_salary=e[i].salary;
  increase_salary(&e[i]);
  printf("Name : %s\nOld Salary : %d\nWork Hours : %d\nNew Salary : %d\n",e[i].name,old_salary,e[i].work_hours,e[i].salary);
 }


 printf("\n");
 return 0;
}
