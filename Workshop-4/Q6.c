//6.Using scanf, ask the user to type in their name and age, print this data to a text file. You should aim to only use one scanf command as you can store memory to an integer variable and char array using %s and %d. 

#include<stdio.h>

int main(){
 FILE *fp; 
 char name[50];
 int age;
 
 printf("Enter name and age :");
 scanf("%s %d",name,&age);
 
 fp=fopen("name-age.txt","w");
 if(fp==NULL){
  printf("Error opening file.\n");
  return 1;
 }
 fprintf(fp,"Name : %s\nAge : %d\n",name,age);
 fclose(fp);
 
 printf("Name and age written to file successfully");
 
 printf("\n");
 return 0;
}
