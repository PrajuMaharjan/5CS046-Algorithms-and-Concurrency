//1.Create a function which returns a struct containing the area and perimeter of a circle. The function should take in the radius as it’s only parameter. 

#include <stdio.h>

typedef struct{
 float area;
 float perimeter;
}attributes;

attributes calculate_area_and_perimeter(float r){
 attributes result;
 
 result.area=3.14*r*r;
 result.perimeter=2*3.14*r;
 
 return result;
}

int main(){
 float radius;
 attributes area_and_perimeter;
 
 printf("Enter the radius of the circle : ");
 scanf("%f",&radius);
 
 area_and_perimeter=calculate_area_and_perimeter(radius);
 
 printf("Radius = %f.\n",radius);
 printf("Circumference = %.2f. \n",area_and_perimeter.perimeter);
 printf("Area = %.2f. \n",area_and_perimeter.area);
 
 printf("\n");
 return 0;
}
