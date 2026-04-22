// 2.Create a program which rotates an image file (90/180/270 degrees) depending on the command line argument using “argv.” 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lodepng.h"

int main(int argc,char *argv[]){
	if(argc!=3){
		printf("Usage: %s input.png angle(90/180/270)\n", argv[0]);
    return 1;
    }
    
  unsigned char *image,*rotated;
  unsigned width,height,error;
  int angle=atoi(argv[2]);

  error=lodepng_decode32_file(&image,&width,&height,argv[1]);
  if(error){
  	printf("Decode error %u: %s\n", error,lodepng_error_text(error));
    return 1;
  }
  
  unsigned newWidth=width;
  unsigned newHeight=height;

  if(angle==90||angle==270){
        newWidth=height;
        newHeight=width;
    }
    
  rotated=(unsigned char*) malloc(newWidth*newHeight*4);

  if(rotated==NULL){
        printf("Memory allocation failed\n");
        free(image);
        return 1;
   }

   for(unsigned y=0;y<height;y++){
      for(unsigned x=0;x<width;x++){
         unsigned oldIndex=(y*width+x)*4;
         unsigned newX,newY;

         if(angle==90){
            newX=height-1-y;
            newY=x;
         }
         else if(angle==180){
            newX=width-1-x;
            newY=height-1-y;
         }
         else if(angle==270){
            newX=y;
            newY=width-1-x;
         }
         else{
            printf("Invalid angle. Use 90, 180, or 270.\n");
            free(image);
            free(rotated);
            return 1;
            }
         
         unsigned newIndex=(newY*newWidth+newX)*4;

         for(int i=0;i<4;i++){
            rotated[newIndex+i]=image[oldIndex+i];
           }
       }
   }

    error=lodepng_encode32_file("rotated.png",rotated,newWidth, newHeight);
    if(error){
        printf("Encode error %u: %s\n", error, lodepng_error_text(error));
    }else{
        printf("Image rotated and saved as rotated.png\n");
    }

  free(image);
  free(rotated);
	printf("\n");
	return 0;
}
