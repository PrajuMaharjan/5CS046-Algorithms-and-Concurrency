//5.Using the command line arguments (argv), merge the contents of two files and print them out to another. For example, when you run your program with ./a.out file1.txt file2.txt file3.txt, the contents from file1 and file2 will be combined and printed to file3. Both files you will need to create yourself, it doesn’t matter what is inside, just as long as you’re able to see the merge at the end. 

#include<stdio.h>

int main(int argc,char *argv[]){
 FILE *fp1,*fp2,*fp3;
 int c;

 if(argc!=4){
  printf("Usage: %s sfile1 file2 combined_file\n",argv[0]);
  return 1;
 }

 fp1=fopen(argv[1],"r");
 if(fp1==NULL){
  printf("Error opening source file 1.\n");
  return 1;
 }

 fp2=fopen(argv[2],"r");
 if(fp2==NULL){
  printf("Error opening source file 2.\n");
  fclose(fp1);
  return 1;
 }
 
 fp3=fopen(argv[3],"w");
 if(fp3==NULL){
  printf("Error opening destination file.\n");
  fclose(fp1);
  fclose(fp2);
  return 1;
 }
 
 while((c=fgetc(fp1))!=EOF){
  fputc(c,fp3);
 }
 while((c=fgetc(fp2))!=EOF){
  fputc(c,fp3);
 }

 printf("File copied successfully");

 fclose(fp1);
 fclose(fp2);
 fclose(fp3);

 printf("\n");
 return 0;
}
