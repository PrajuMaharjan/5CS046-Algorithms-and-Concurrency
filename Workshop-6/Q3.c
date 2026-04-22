// 3.	Create a program which adjusts the brightness of an image file depending on the command line argument using “argv.” The user should enter a positive value to increase brightness or a negative value to decrease brightness.  
// Formula:  
// R = R + value  
// G = G + value  
// B = B + value  
// If any value becomes greater than 255, set it to 255.  
// If any value becomes less than 0, set it to 0.  

#include <stdio.h>
#include <stdlib.h>
#include "lodepng.h"

int main(int argc, char *argv[]){
    if(argc != 3){
        printf("Usage: %s input.png brightness_value\n", argv[0]);
        return 1;
    }

    unsigned char *image;
    unsigned width, height, error;

    int value = atoi(argv[2]);

    error = lodepng_decode32_file(&image, &width, &height, argv[1]);
    if(error){
        printf("Decode error %u: %s\n", error, lodepng_error_text(error));
        return 1;
    }

    for(unsigned i = 0; i < width * height * 4; i += 4){
        int r = image[i]     + value;
        int g = image[i + 1] + value;
        int b = image[i + 2] + value;

        if(r > 255) r = 255;
        if(g > 255) g = 255;
        if(b > 255) b = 255;

        if(r < 0) r = 0;
        if(g < 0) g = 0;
        if(b < 0) b = 0;

        image[i]     = r;
        image[i + 1] = g;
        image[i + 2] = b;
    }

    error = lodepng_encode32_file("brightness.png", image, width, height);
    if(error){
        printf("Encode error %u: %s\n", error, lodepng_error_text(error));
        free(image);
        return 1;
    }

    printf("Brightness adjusted image saved as brightness.png\n");

    free(image);
    return 0;
}
