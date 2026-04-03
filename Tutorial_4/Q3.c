//3.	Explore the functions fopen() and fclose(). 

#include <stdio.h>

int main(){
 FILE *fptr;

 fptr = fopen("sample.txt", "w");
 
 if(fptr == NULL){
  printf("Error opening file.\n");
  return 1;
 }

 fprintf(fptr, "Hello, this is a file handling example.\n");

 fclose(fptr);

 printf("File written and closed successfully.\n");

 printf("\n");
 return 0;
}
