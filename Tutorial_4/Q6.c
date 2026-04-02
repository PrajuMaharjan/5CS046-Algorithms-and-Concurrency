//6.Create a file named output.txt, take a string input from the user, and write it to the file using fputs(). Experiment with fprintf() and explore the difference. 

#include<stdio.h>

int main(){
 FILE *fptr;
 char input[50];
 
 printf("Enter a string.");
 scanf("%s",input);
 
 fptr=fopen("output.txt","w");
 fputs(input,fptr);
 fclose(fptr);
}
