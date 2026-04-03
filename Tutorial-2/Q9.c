// 9.Write a void function which solves simultaneous equations. Your program will take six parameters. E.g. function(double a, double b, double c, double d, double e, double f){} By solving simultaneous equations, you are finding where the two lines cross each other, so your function should print an x and y coordinate.  
// a = number in front of x of equation one b = number in front of y of equation one c = constant of equation one d = number in front of x of equation two e = number in front of y of equation two f = constant of equation two 

#include <stdio.h>

void equations(double a,double b,double c,double d,double e,double f){
 double determinant=(a*e)-(b*d);
 if(determinant==0){
  printf("No unique solution(lines are parallel or identical)\n");
 }else{
  double x=(c*e-b*f)/determinant;
  double y=(a*f-c*d)/determinant;
  
  printf("X = %lf\n",x);
  printf("Y = %lf",y);
 }
}

int main(){
 double a,b,c,d,e,f;
 
 printf("Enter value of a for the equation(ax+by=c) : ");
 scanf("%lf",&a);
 printf("Enter value of b for the equation(ax+by=c) : ");
 scanf("%lf",&b);
 printf("Enter value of c for the equation(ax+by=c) : ");
 scanf("%lf",&c);
 printf("Enter value of d for the equation(dx+ey=f) : ");
 scanf("%lf",&d);
 printf("Enter value of e for the equation(dx+ey=f) : ");
 scanf("%lf",&e);
 printf("Enter value of f for the equation(dx+ey=f) : ");
 scanf("%lf",&f);
 
 equations(a,b,c,d,e,f);
 
 printf("\n");
 return 0;
}
