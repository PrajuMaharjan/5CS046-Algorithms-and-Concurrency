//7.	Write a function which returns an appropriate value for the formula “F = MA.” F = Force. M = Mass. A = Acceleration. Depending on which variable is set to “NAN” when the function is called, your function should work it out and return that value.  

#include <stdio.h>
#include <math.h>

float force(float mass,float acceleration){
 if(isnan(mass)){
  printf("Mass is not a number.");
  return NAN;
 }else if(isnan(acceleration)){
  printf("Accelaration is not a number.");
  return NAN;
 }else{
  return mass*acceleration;
 }
 
}

int main(){
 float m,a,f;
 
 while(1){
 printf("Enter mass (): ");
 scanf("%f",&m);

 printf("Enter accelaration : ");
 scanf("%f",&a);
 
 f=force(m,a);
 
 if(isnan(f)){
  continue;
 }else{
  printf("Force = %f",f);
 }
 
 }
 printf("\n");
 return 0;
}
