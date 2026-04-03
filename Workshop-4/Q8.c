//8.	Read in Words.txt and encrypt all the characters by adding 3 to the ascii value. For example, the letter a will translate to d. The letter h will translate to k. You should then print this value to a text file.

#include <stdio.h>

int main(){
    FILE *fp1, *fp2;
    char ch;

    fp1 = fopen("Words.txt", "r");
    if(fp1 == NULL){
        printf("Error opening input file.\n");
        return 1;
    }

    fp2 = fopen("Encrypted.txt", "w");
    if(fp2 == NULL){
        printf("Error opening output file.\n");
        fclose(fp1);
        return 1;
    }

    while((ch = fgetc(fp1)) != EOF){
        ch = ch + 3;
        fputc(ch, fp2);
    }

    printf("File encrypted successfully.\n");

    fclose(fp1);
    fclose(fp2);

    return 0;
}
