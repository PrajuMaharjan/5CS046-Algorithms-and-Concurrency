//2.Create a function which returns a struct containing two roots given from the quadratic formula. The function should take 3 integers as parameters named a, b and c.

#include<stdio.h>
#include <math.h>

typedef struct{
 float root1;
 float root2;
}Roots;

Roots find_roots(int a,int b,int c){
 Roots r;
 float discriminant=b*b-4*a*c;
 
 if(discriminant>=0){
  r.root1=(-b+sqrt(discriminant))/(2*a);
  r.root2=(-b-sqrt(discriminant))/(2*a);
 }else{
  r.root1=r.root2=b*(2.0*a);
 }
 return r;
}

int main(){
 int a,b,c;
 Roots roots;
 
 printf("Enter values of a,b and c : ");
 scanf("%d %d %d",&a,&b,&c);
 
 roots=find_roots(a,b,c);
 
 printf("Root 1 = %.2f\n",roots.root1);
 printf("Root 2 = %.2f\n",roots.root2);

 return 0;
}
