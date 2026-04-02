//3.Use of typedef keyword in c.

#include <stdio.h>

typedef struct {
 char name[50];
 int level;
 char group[6];
}Student;

int main(){
 Student s1={"Praju Maharjan",5,"L5CG9"};

 printf("Name : %s\n",s1.name);
 printf("Level : %d\n",s1.level);
 printf("Group : %s\n",s1.group);

 printf("\n");
 return 0;
}
