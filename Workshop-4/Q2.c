//2.Read in the text file called Numbers.txt and detect all even numbers. 

#include<stdio.h>

int main(){
 FILE *fp;
 int num,count=0;
 
 fp=fopen("Numbers.txt","r");
 while(fscanf(fp,"%d",&num)!=EOF){
  if(num%2==0){
   printf("%d ",num);
   count++;
  }
 }
 printf("\nThere are %d even numbers in the file.",count);
 fclose(fp);
 
 printf("\n");
 return 0;
}
