// 4.Create a text file and use the function fgetc()  to read the lines and print each line to the console. 
// Count the total characters in the file using fgetc(). 

#include<stdio.h>

int main(){
 FILE *fptr;
 int c;
 int ch=0;
 
 fptr=fopen("text.txt","r");
 if(fptr==NULL){
  printf("Error opening file.");
  return 1;
 }
 
 while((c=fgetc(fptr))!=EOF){
  printf("%c",c);
  ch++;
 }
 fclose(fptr);
 
 printf("\nNumber of characters in the file : %d",ch);
 
 printf("\n");
 return 0;
}
