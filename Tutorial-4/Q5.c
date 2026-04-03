//5.	Explore the function fscanf()

#include <stdio.h>

int main(){
 FILE *fptr;
 int id;
 char name[20];

 fptr = fopen("text.txt", "r");
 if(fptr == NULL){
  printf("Error opening file.\n");
  return 1;
 }

 fscanf(fptr, "%d %s", &id, name);

 printf("ID: %d\n", id);
 printf("Name: %s\n", name);
 fclose(fptr);

 printf("\n");
 return 0;
}
