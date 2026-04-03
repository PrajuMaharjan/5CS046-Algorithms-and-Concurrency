//1.Read in the text file called numbers.txt and print out all the data to the terminal. You should also print out how many numbers are within the file. 

#include <stdio.h>

int main(){
 FILE *fp;
 int c,count=0;
 
 fp=fopen("Numbers.txt","r");
 while((c=fgetc(fp))!=EOF){
  printf("%d ",c);
  count++;
 }
 printf("\n Count = %d.",count);
 
 printf("\n");
 return 0;
}
