#include<stdio.h>

int main(){
 FILE *fp;
 int a,b,c,d;
 
 fp=fopen("num.txt","r");
 if(fp==NULL){
  printf("Error opening file.\n");
  return -1;
 }
 while(fscanf(fp,"%d, %d",&a,&b)!=EOF){
 printf("a = %d.\nb = %d.\n",a,b);
 }
 fclose(fp);
 return 0;
}
