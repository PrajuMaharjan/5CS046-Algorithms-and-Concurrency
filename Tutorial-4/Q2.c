//2.	Explore different modes for file opening in C 

#include <stdio.h>
int main(){
 FILE *fptr;

 fptr = fopen("file.txt", "w");
 fprintf(fptr, "This is write mode.\n");
 fclose(fptr);

 fptr = fopen("file.txt", "a");
 fprintf(fptr, "This is append mode.\n");
 fclose(fptr);

 char ch;
 fptr = fopen("file.txt", "r");
 while((ch = fgetc(fptr)) != EOF){
  putchar(ch);
 }
 fclose(fptr);
 
 printf("\n");
 return 0;
}
