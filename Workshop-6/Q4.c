// 4.	Research different types of blurring techniques for images and apply at least 2 using the lodepng library. 
// a.	Box blur  
// b.	Gaussian blur 

#include <stdio.h>
#include <stdlib.h>
#include "lodepng.h"

void box_blur(unsigned char *image, unsigned char *output, unsigned w, unsigned h){
    for(unsigned y = 1; y < h-1; y++){
        for(unsigned x = 1; x < w-1; x++){

            int sumR=0, sumG=0, sumB=0;

            for(int dy=-1; dy<=1; dy++){
                for(int dx=-1; dx<=1; dx++){
                    int idx = ((y+dy)*w + (x+dx)) * 4;
                    sumR += image[idx];
                    sumG += image[idx+1];
                    sumB += image[idx+2];
                }
            }

            int out = (y*w + x) * 4;
            output[out]   = sumR / 9;
            output[out+1] = sumG / 9;
            output[out+2] = sumB / 9;
            output[out+3] = image[out+3]; // keep alpha
        }
    }
}

void gaussian_blur(unsigned char *image, unsigned char *output, unsigned w, unsigned h){
    int kernel[3][3] = {
        {1,2,1},
        {2,4,2},
        {1,2,1}
    };

    for(unsigned y = 1; y < h-1; y++){
        for(unsigned x = 1; x < w-1; x++){

            int sumR=0, sumG=0, sumB=0;

            for(int dy=-1; dy<=1; dy++){
                for(int dx=-1; dx<=1; dx++){
                    int idx = ((y+dy)*w + (x+dx)) * 4;
                    int k = kernel[dy+1][dx+1];

                    sumR += image[idx]   * k;
                    sumG += image[idx+1] * k;
                    sumB += image[idx+2] * k;
                }
            }

            int out = (y*w + x) * 4;
            output[out]   = sumR / 16;
            output[out+1] = sumG / 16;
            output[out+2] = sumB / 16;
            output[out+3] = image[out+3];
        }
    }
}

int main(){
    unsigned char *image, *box, *gauss;
    unsigned w, h, error;

    error = lodepng_decode32_file(&image, &w, &h, "image.png");
    if(error){
        printf("Error: %s\n", lodepng_error_text(error));
        return 1;
    }

    box   = malloc(w * h * 4);
    gauss = malloc(w * h * 4);

    box_blur(image, box, w, h);
    gaussian_blur(image, gauss, w, h);

    lodepng_encode32_file("box_blur.png", box, w, h);
    lodepng_encode32_file("gaussian_blur.png", gauss, w, h);

    printf("Box blur saved as box_blur.png\n");
    printf("Gaussian blur saved as gaussian_blur.png\n");

    free(image);
    free(box);
    free(gauss);

    return 0;
}
