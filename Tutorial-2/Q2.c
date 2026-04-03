//2.Write a function which prints the area and perimeter of a circle. The function should only have one parameter; the radius.  

#include<stdio.h>

void area_and_perimeter(float radius){
 float area=3.14*radius*radius;
 float perimeter=2*3.14*radius;
 
 printf(" Area = %.2f \n",area);
 printf(" Perimeter = %.2f \n",perimeter);
}

void main(){
 float r;
 
 printf("Enter the radius of the circle : ");
 scanf("%f",&r);
 area_and_perimeter(r);
 
 printf("\n");
}
