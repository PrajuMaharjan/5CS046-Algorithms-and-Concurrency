//5.Write a void function which finds and prints the mid-point coordinates of a line. The function should take in four parameters (x1, y1, x2 and y2). 

#include <stdio.h>

void mid_point(float x1,float y1,float x2,float y2){
 float mid_point_x,mid_point_y;
 
 mid_point_x=(x1+x2)/2;
 mid_point_y=(y1+y2)/2;
 
 printf("Mid-point of the line : (%f,%f).",mid_point_x,mid_point_y); 
 
}

int main(){
 float x1,y1,x2,y2;
 
 printf("Enter the coordinates of the first endpoint of the line with a space in the middle : ");
 scanf("%f %f",&x1,&y1);
 
 printf("Enter the coordinates of the second endpoint of the line with a space in the middle : ");
 scanf("%f %f",&x2,&y2);
 
 mid_point(x1,y1,x2,y2);
 
 printf("\n");
 return 0;
}
