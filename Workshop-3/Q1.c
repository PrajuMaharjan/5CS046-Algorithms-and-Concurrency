// 1.Write a C program that prompts the user to enter a word and then prints the entered word. Modify the program by using pointers to check whether the entered word is a palindrome.

#include<stdio.h>
#include <string.h>

void check_palindrome(char* word){
 int size=strlen(word)-1;
 char reversed_word[size];
 
 for(int i=0;i<=size;i++){
  reversed_word[i]=word[size-i];
 }
 if(!(strcmp(word,reversed_word))){
  printf("%s is a palindrome.",word);
 }else{
  printf("%s is not a palindrome.",word);
 }
}

int main(){
 char word[50];
 printf("Enter a word : ");
 scanf("%s",word);
 printf("The word you entered is : %s.\n",word);
 
 char *pointer=word;
 
 check_palindrome(pointer);
 
 printf("\n");
 return 0;
}
