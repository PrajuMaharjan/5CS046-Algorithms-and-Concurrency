//7.	Read in Words.txt which contains a single paragraph, perform the following: 
//a.	Print out how many times the letter “c” is found in the text file. 
//b.	Print out how many words are in the text file. 
//c.	Print out how many punctuation symbols are used (, . - / etc) 

#include <stdio.h>

int main(){
    FILE *fp;
    char ch;
    int c_count=0,word_count=0,p_count=0;
    int inWord=0;

    fp=fopen("Words.txt", "r");
    if(fp==NULL){
        printf("Error opening file.\n");
        return 1;
    }

    while((ch=fgetc(fp))!=EOF){
        if(ch=='c'||ch=='C'){
            c_count++;
        }

        if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z')||(ch>='0' && ch<= '9')){
            if(inWord==0){
                word_count++;
                inWord=1;
            }
        }else{
            inWord=0;
        }
        if((ch >=33&&ch<=47)||
           (ch >=58&&ch<=64)||
           (ch >=91&&ch<=96)||
           (ch >=123&&ch<=126)){
            p_count++;
        }
    }

    fclose(fp);

    printf("Number of 'c' letters: %d\n",c_count);
    printf("Number of words: %d\n", word_count);
    printf("Number of punctuation symbols: %d\n",p_count);

    return 0;
}
