//6.Array of structure.

#include <stdio.h>
#include <string.h>

struct Student{
 int roll;
 char name[50];
 char address[50];
 int marks;
};

int main(){
 struct Student s[2];

 s[0].roll=16;
 strcpy(s[0].name,"Praju Maharjan");
 strcpy(s[0].address,"Kathmandu");
 s[0].marks=87;

 s[1].roll=17;
 strcpy(s[1].name,"Prajwal Shrestha");
 strcpy(s[1].address,"Lalitpur");
 s[1].marks=78;

 for(int i=0;i<=1;i++){ 
  printf("Roll No. : %d \n",s[i].roll);
  printf("Name : %s \n",s[i].name);
  printf("Address. : %s \n",s[i].address);
  printf("Marks. : %d \n",s[i].marks);
 }
 
 printf("\n");
 return 0;
}
