//2.	Apply a negative filter on an image file. This is the process of reversing the RGB values. For example, if the Red value of the pixel is 100, the inverse is 155. NOTE: 0 is minimum and 255 is maximum. 

#include <stdio.h>
#include <stdlib.h>
#include "lodepng.h"

int main(){
    unsigned char *image;
    unsigned width, height;
    unsigned error;

    error=lodepng_decode32_file(&image,&width,&height,"Image.png");
    if(error){
        printf("Decode error %u: %s\n", error, lodepng_error_text(error));
        return 1;
    }
    for(unsigned i=0;i<width*height*4;i+=4){
        image[i]=255-image[i];   
        image[i+1]=255-image[i+1];
        image[i+2]=255-image[i+2];
    }

    error=lodepng_encode32_file("negative.png",image,width,height);
    if(error){
        printf("Encode error %u: %s\n", error, lodepng_error_text(error));
        free(image);
        return 1;
    }

    printf("Negative image saved as negative.png\n");

    free(image);
    printf("\n");
    return 0;
}
