//2. Create a structure variable.

#include<stdio.h>

struct Student{
 char name[50];
 int level;
 char group[6];
};

int main(){
 struct Student s1={"Praju Maharjan",5,"L5CG9"};
 
 printf("Name : %s\n",s1.name);
 printf("Level : %d\n",s1.level);
 printf("Group : %s\n",s1.group);
 
 printf("\n");
 return 0;
}
