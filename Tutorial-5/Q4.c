//4.Create a structure for student(roll,name,address,mark) and access the members. 

#include <stdio.h>
#include <string.h>

struct Student{
 int roll;
 char name[50];
 char address[50];
 int marks;
};

int main(){
 struct Student s1;
 
 s1.roll=16;
 strcpy(s1.name,"Praju Maharjan");
 strcpy(s1.address,"Kathmandu");
 s1.marks=87;
 
 printf("Roll No. : %d \n",s1.roll);
 printf("Name : %s \n",s1.name);
 printf("Address. : %s \n",s1.address);
 printf("Marks. : %d \n",s1.marks);
 
 printf("\n");
 return 0;
}
