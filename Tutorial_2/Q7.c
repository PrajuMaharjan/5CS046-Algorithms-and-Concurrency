//7.	Write a function which returns an appropriate value for the formula “F = MA.” F = Force. M = Mass. A = Acceleration. Depending on which variable is set to “NAN” when the function is called, your function should work it out and return that value.  

#include <stdio.h>
#include <math.h>

float calculation(float mass,float acceleration,float force){
 if(isnan(mass)){
  return force/acceleration;
 }else if(isnan(acceleration)){
  return force/mass;
 }else if(isnan(force)){
  return mass*acceleration;
 }else{
  return -1;
 }
}

int main(){
 float m,a,f,result;
 
 while(1){
 printf("Enter mass (enter NAN for unknown value): ");
 scanf("%f",&m);

 printf("Enter accelaration (enter NAN for unknown value): ");
 scanf("%f",&a);
 
 printf("Enter force (enter NAN for unknown value): ");
 scanf("%f",&f);
 
  if(isnan(m)+isnan(a)+isnan(f)>1){
  printf("Error: More than one value is NAN.\n");
  continue;
 }
 
 result=calculation(m,a,f);

 if(isnan(m)){
  printf("Mass = %f .",result);
 }else if(isnan(a)){
  printf("Acceleration = %f .",result);
 }else if(isnan(f)){
  printf("Force = %f .",result);
 }else{
  printf("Error: Nothing to calculate.\n");
  continue;
 }
  break;
 }
 
 printf("\n");
 return 0;
}
