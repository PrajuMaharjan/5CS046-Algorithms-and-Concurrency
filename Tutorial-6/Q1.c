//1.Decode a PNG image into 1D and 2D array image. 

#include <stdio.h>
#include <stdlib.h>
#include "lodepng.h"

int main(){
 unsigned char *image;
 unsigned width,height;
 unsigned int error;
 
 error=lodepng_decode32_file(&image,&width,&height,"4x4_Image.png");
 if(error){
  printf("Error : %d,Message: %s",error,lodepng_error_text(error));
  return 1;
 }
 printf("Image loaded\n");
 
 printf("\n\nImage decoded into 1D array image : \n");
 for(int i=0;i<width*height*4;i+=4){
  printf("%d %d %d %d \n",image[i],image[i+1],image[i+2],image[i+3]);
 }
 
 unsigned char image2D[height][width*4];

 for(int i=0;i<height;i++){
  for(int j=0;j<width;j++){
   int index=(i*width+j)*4;
   int n_col=j*4;
   
   image2D[i][n_col]=image[index];
   image2D[i][n_col+1]=image[index+1];
   image2D[i][n_col+2]=image[index+2];
   image2D[i][n_col+3]=image[index+3];
  }
 }

 printf("\n\nImage decoded into 2D array image : \n");
 for(int i=0;i<height;i++){
  for(int j=0;j<width;j++){
    int n_col=j*4;
    printf("%d %d %d %d|",image2D[i][n_col],image2D[i][n_col+1],image2D[i][n_col+2],image2D[i][n_col+3]);
  }
  printf("\n");
 }
 free(image);
 printf("\n");
 return 0;
}
