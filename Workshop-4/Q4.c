//4.Using the command line arguments (argv), copy the contents of one file to another file. For example. If you run your program with “./a.out file1.txt file2.txt”, your program should transfer the content from file1 to file2. 

#include<stdio.h>

int main(int argc,char *argv[]){
 FILE *fp1,*fp2;
 int c;
 
 if(argc!=3){
  printf("Usage: %s source_file destination_file\n",argv[0]);
  return 1;
 }
 
 fp1=fopen(argv[1],"r");
 if(fp1==NULL){
  printf("Error opening source file.\n");
  return 1;
 }
 
 fp2=fopen(argv[2],"w");
 if(fp2==NULL){
  printf("Error opening destination file.\n");
  fclose(fp1);
  return 1;
 }
 while((c=fgetc(fp1))!=EOF){
  fputc(c,fp2);
 }
 printf("File copied successfully");
 
 fclose(fp1);
 fclose(fp2);
 
 printf("\n");
 return 0;
}
