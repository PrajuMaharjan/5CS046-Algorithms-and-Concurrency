//3.Recreate question 2 but returning a pointer (float). Use the example given in the lecture on how to return a pointer to an array of a specific variable type.

#include<stdio.h>
#include <math.h>
#include <stdlib.h>

float* find_roots(int a,int b,int c){
 float *roots=(float*) malloc(2*sizeof(float));
 float discriminant=b*b-4*a*c;

 if(discriminant>=0){
  roots[0]=(-b+sqrt(discriminant))/(2*a);
  roots[1]=(-b-sqrt(discriminant))/(2*a);
 }else{
  roots[0]=roots[0]=b*(2.0*a);
 }
 return roots;
}

int main(){
 int a,b,c;
 float *roots;

 printf("Enter values of a,b and c : ");
 scanf("%d %d %d",&a,&b,&c);

 roots=find_roots(a,b,c);

 printf("Root 1 = %.2f\n",roots[0]);
 printf("Root 2 = %.2f\n",roots[1]);

 free(roots);
 
 return 0;
}
