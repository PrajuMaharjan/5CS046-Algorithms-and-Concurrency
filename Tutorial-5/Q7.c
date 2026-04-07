//7.Create a structure named student that has a name, roll number and marks as members. Assume appropriate types and size of members. Use this structure to read and display records of 10 students. Create two functions: One is to read information of students and other to display the information.

#include<stdio.h>
#include<string.h>

typedef struct{
 int roll_number;
 char name[20];
 int marks;
}Student;
 
 Student read_info(){
 int roll_no,marks;
 char name[20];
 Student s;
 
 printf("Enter Roll No.,Name and marks seperated by commas : ");
 scanf("%d,%[^,],%d",&roll_no,name,&marks);
 
 s.roll_number=roll_no;
 strcpy(s.name,name);
 s.marks=marks;
 
 return s;
}

void display_info(Student s){
 printf("\nRoll No. : %d\n",s.roll_number);
  printf("Name : %s\n",s.name);
  printf("Marks : %d\n",s.marks);
}

int main(){
 Student s[10]; 
 
 for(int i=0;i<10;i++){
  s[i]=read_info();
 }

 for(int i=0;i<10;i++){
  display_info(s[i]);
 }

 printf("\n");
 return 0;
}
