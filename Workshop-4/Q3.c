//3.Reproduce number 2 but instead, print all the numbers to a new text file. 

#include<stdio.h>

int main(){
 FILE *fp1,*fp2;
 int num,count=0;

 fp1=fopen("Numbers.txt","r");
 fp2=fopen("even-numbers.txt","w+");
 
 
 while(fscanf(fp1,"%d",&num)!=EOF){
  if(num%2==0){
   fprintf(fp2,"%d\n",num);
  }
 }
 rewind(fp2);
 while(fscanf(fp2,"%d",&num)!=EOF){
  if(num%2==0){
   printf("%d ",num);
   count++;
  }
 }
 
 printf("\nThere are %d even numbers in the file.",count);
 fclose(fp1);
 fclose(fp2);

 printf("\n");
 return 0;
}
