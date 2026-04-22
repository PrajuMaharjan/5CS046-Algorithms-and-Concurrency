// 1.	Create a program which applies a sepia filter on an image. This is the process of recalculating each pixel’s RGB values using the sepia conversion formula. 
// Formula: 
// NewR = 0.393R + 0.769G + 0.189B 
// NewG = 0.349R + 0.686G + 0.168B NewB = 0.272R + 0.534G + 0.131B 
//	If any value exceeds 255, set it to 255. 	 
// NOTE: 0 is minimum and 255 is maximum. 

#include <stdio.h>
#include <stdlib.h>
#include "lodepng.h"

int main(){
	unsigned char *image;
	unsigned width,height;
	unsigned error;
	
	error=lodepng_decode32_file(&image,&width,&height,"image.png");
	if(error){
     printf("Error %u: %s\n", error,lodepng_error_text(error));
     return 1;
    }
	
	for(unsigned i=0;i<width*height*4;i+=4){
		unsigned char r= image[i];
    unsigned char g=image[i+1];
    unsigned char b=image[i+2];

    int newR=(int)(0.393*r+0.769*g+0.189*b);
    int newG=(int)(0.349*r+0.686*g+0.168*b);
    int newB=(int)(0.272*r+0.534*g+0.131*b);

        if(newR>255)newR=255;
        if(newG>255)newG=255;
        if(newB>255)newB=255;

        image[i]=newR;
        image[i+1]=newG;
        image[i+2]=newB;
    }
    
    error=lodepng_encode32_file("sepia.png",image,width,height);
    if(error){
        printf("Error saving image : %s\n",lodepng_error_text(error));
        free(image);
        return 1;
    }
   
   printf("Sepia image saved as sepia.png\n");
	free(image);
	printf("\n");
	return 0;
}
