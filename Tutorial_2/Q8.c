// 8.Write a single function which returns and represents all SUVAT equations. You will need to do some research online on the formulas. This will test your formula rearranging skills as you can work out different variables from one equation however, all the inputs may vary so you will need implement as many formulas as possible. Your program should always be able to work out one variable when the other four variables have been set.
// S	= distance 
// U	= initial velocity 
// V	= end velocity 
// A = acceleration 
// T	= time 

#include <stdio.h>

float suvat(int choice,float v1,float v2,float v3,float v4){
 switch(choice){
   case 1:
    return (v1*v4 + 0.5*v3*v4*v4);
   case 2:
    return (v2-v3*v4);
   case 3:
    return (v2+v3*v4);
   case 4:
    return (v3-v2)/v4;
   case 5: 
    return (v3-v2)/v4;
}
}

int main(){
 float s,u,v,a,t,output;
 int choice;
  printf("\nWhat do you need to find : \n1)Distance(s)\n2)Initial Velocity(u)\n3)End Velocity(v)\n4)Acceleration(a)\n5)Time(t)\n");
  scanf("%d",&choice);
  switch(choice){
   case 1:
    printf("\nEnter initial velocity : ");
    scanf("%f", &u);
    printf("\nEnter end velocity: ");
    scanf("%f", &v);
    printf("\nEnter acceleration: ");
    scanf("%f", &a);
    printf("\nEnter time: ");
    scanf("%f", &t);
    output=suvat(choice,u,v,a,t);
    printf("\nDistance : %.2f.",output);
    break;
   case 2:
    printf("\nEnter distance : ");
    scanf("%f", &s);
    printf("\nEnter end velocity: ");
    scanf("%f", &v);
    printf("\nEnter acceleration: ");
    scanf("%f", &a);
    printf("\nEnter time: ");
    scanf("%f", &t);
    output=suvat(choice,s,v,a,t);
    printf("\nInitial velocity : %.2f",output);
    break;
   case 3:
    printf("\nEnter distance : ");
    scanf("%f", &s);
    printf("\nEnter initial velocity: ");
    scanf("%f", &u);
    printf("\nEnter acceleration: ");
    scanf("%f", &a);
    printf("\nEnter time: ");
    scanf("%f", &t);
    output=suvat(choice,s,u,a,t);
    printf("\nEnd velocity : %.2f",output);
    break;
   case 4:
    printf("\nEnter distance : ");
    scanf("%f",&s);
    printf("\nEnter initial velocity : ");
    scanf("%f", &u);
    printf("\nEnter end velocity: ");
    scanf("%f", &v);
    printf("\nEnter time: ");
    scanf("%f", &t);
    output=suvat(choice,s,u,v,t);
    printf("\nAcceleration : %.2f",output);
    break;
   case 5:
    printf("\nEnter distance : ");
    scanf("%f",&s);    
    printf("\nEnter initial velocity : ");
    scanf("%f", &u);
    printf("\nEnter end velocity: ");
    scanf("%f", &v);
    printf("\nEnter acceleration: ");
    scanf("%f", &a);
    output=suvat(choice,s,u,v,a);
    printf("\nTime : %.2f",output);
    break;
   default:
    printf("\nInvalid input.");
  }
 printf("\n");
 return 0;
}
