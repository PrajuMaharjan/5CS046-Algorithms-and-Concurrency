// 1.	Explore file handling in C.

#include <stdio.h>

int main(){
 FILE *fptr;
 fptr = fopen("file.txt", "w");
 fprintf(fptr, "Hello World");
 fclose(fptr);
 }
