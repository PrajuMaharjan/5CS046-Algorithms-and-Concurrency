//3.Apply a grayscale filter on an image file. Please refer lecture slide for the grayscale formula. 

#include <stdio.h>
#include <stdlib.h>
#include "lodepng.h"

int main(){
	unsigned char *image;
	unsigned width,height;
	unsigned error;
	
	error=lodepng_decode32_file(&image,&width,&height,"image.png");
	if (error){
		printf("Decode Error %u : %s \n",error,lodepng_error_text(error));
		return 1;
	}
	
	for(unsigned i=0;i<width*height*4;i+=4){
		unsigned char gray=(unsigned char)(0.299*image[i]+0.587*image[i+1]+0.113-image[i+2]);
		
		image[i]=gray;
		image[i+1]=gray;
		image[i+2]=gray;
	}
	
	error=lodepng_encode32_file("grayscaled_image.png",image,width,height);
	if(error){
		printf("Encode Error %u : %s\n",error,lodepng_error_text(error));
		free(image);
		return 1;
	}
	
	printf("Image turned to grayscale successfully");
	free(image);
	printf("\n");
	return 0;
}

