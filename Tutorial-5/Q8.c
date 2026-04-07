//8.Create a user defined data type for storing 2D coordinate point. Take two points from user and calculate midpoint using function.

#include <stdio.h>

typedef struct{
 float x;
 float y;
}point;

point calculate_mid_point(point p1,point p2){
 point mid_point;
 
 mid_point.x=(p1.x+p2.x)/2;
 mid_point.y=(p1.y+p2.y)/2;
 
 return mid_point;
}


int main(){
 point p1,p2,mid_point;
 float x,y;
 
 printf("Enter the co-ordinates of the first point(x1,y1): ");
 scanf("%f,%f",&x,&y);
 p1.x=x;
 p1.y=y;

 printf("Enter the co-ordinates of the second point(x2,y2): ");
 scanf("%f,%f",&x,&y);
 p2.x=x;
 p2.y=y;
 
 mid_point=calculate_mid_point(p1,p2);
 printf("Mid point of co-ordinates (%f,%f) and (%f,%f) is (%f,%f).",p1.x,p1.y,p2.x,p2.y,mid_point.x,mid_point.y);
 
 printf("\n"); 
 return 0;
}
