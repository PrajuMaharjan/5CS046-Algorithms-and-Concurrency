//5.Create a structure for student(roll,name,address(province,district,city,ward),mark) and access the members.

#include <stdio.h>

struct Address{
 char province[20];
 char district[20];
 char city[20]; 
 int ward;
};

struct Student{
 int roll;
 char name[50];
 struct Address address;
 int marks;
};

int main(){
 struct Student s1={16,"Praju Maharjan",{"Bagmati","Kathmandu","Kathmandu",14},87};

 printf("Roll No. : %d \n",s1.roll);
 printf("Name : %s \n",s1.name);
 printf("Full Address : \n\tProvince : %s\n\tDistrict : %s\n\tCity : %s\nWard : %d\n",s1.address.province,s1.address.district,s1.address.city,s1.address.ward);
 printf("Marks. : %d \n",s1.marks);

 printf("\n");
 return 0;
}
