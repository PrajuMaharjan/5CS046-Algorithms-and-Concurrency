//9.	Write a program that asks the user for n (how many numbers they want to store). Use malloc to create an integer array and let the user enter n numbers into it. Then use malloc again to create a second integer array of the same size, and copy the numbers into it in reverse order. Print and then free() both arrays.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    
    printf("Enter how many numbers you want to store : ");
    scanf("%d",&n);

    int *integer_arr_1=(int*) malloc(n*sizeof(int));

    printf("Enter %d numbers:\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&integer_arr_1[i]);
    }

    int *integer_arr_2=(int*)malloc(n*sizeof(int));

    for(int i=0;i<n;i++){
        integer_arr_2[i]=integer_arr_1[n-1-i];
    }
    
    printf("\nArray 1 : \n");
    for(int i=0;i<n;i++){
        printf("%d ",integer_arr_1[i]);
    }
    
    printf("\nArray 1 reversed : \n");
    for(int i=0;i<n;i++){
        printf("%d ",integer_arr_2[i]);
    }

    free(integer_arr_1);
    free(integer_arr_2);

    printf("\n");
    return 0;
}
