// 6.	Let us work on the menu of a library. Create a structure containing book information like accession number, name of author, book title and flag to know whether book is issued or not.
// Create a menu in which the following can be done.
// 1 - Display book information
// 2 - Add a new book
// 3 - Display all the books in the library of a particular author
// 4 - Display the number of books of a particular title
// 5 - Display the total number of books in the library
// 6 - Issue a book
// (If we issue a book, then its number gets decreased by 1 and if we add a book, its number gets increased by 1).

#include <stdio.h>
#include <string.h>

typedef struct{
	int accession_number;
	char author[50];
	char title[50];
	int number_of_copies;
} Book;

int main(){
	Book b[5];
	int n=0;
	int choice;
	
	while(1){
		printf("\nMake your choice.\n");
		printf("1. Display book information\n");
    printf("2. Add a new book\n");
    printf("3. Display all the books in the library of a particular author\n");
    printf("4. Display the number of books of a particular title\n");
    printf("5. Display the total number of books in the library\n");
    printf("6. Issue a book\n");
    printf("7. Exit\n");
    printf("Enter choice: ");
    scanf("%d",&choice);
		
		if(choice==1){
    	for(int i=0;i<n;i++){
		    printf("\nAccession No: %d\n", b[i].accession_number);
		    printf("Author: %s\n",b[i].author);
		    printf("Title: %s\n",b[i].title);
		    printf("Copies: %d\n",b[i].number_of_copies);
            }
      }
    else if(choice==2){
        printf("Enter accession no: ");
        scanf("%d",&b[n].accession_number);

        printf("Enter author: ");
        scanf(" %[^\n]",b[n].author);

        printf("Enter title: ");
        scanf(" %[^\n]",b[n].title);

        printf("Enter number of copies: ");
        scanf("%d", &b[n].number_of_copies);
				n++;
        }
    else if(choice==3){
        char search_author[50];
        printf("Enter author name: ");
        scanf(" %[^\n]",search_author);
        	for(int i=0;i<n;i++){
             if(strcmp(b[i].author,search_author)==0){
                printf("\nTitle: %s (Copies: %d)\n",b[i].title, b[i].number_of_copies);
                }
            }
        }
    else if(choice==4){
         char search_title[50];
         int total=0;

         printf("Enter title: ");
         scanf(" %[^\n]",search_title);
         for(int i = 0; i < n; i++){
          if(strcmp(b[i].title,search_title)==0){
             total+=b[i].number_of_copies;
                }
            }
          printf("Total copies of '%s': %d\n",search_title,total);
        }
    else if(choice==5){
         int total = 0;
         for(int i=0;i<n;i++){
            total+=b[i].number_of_copies;
           }
            printf("Total books in library: %d\n",total);
        }
    else if(choice==6){
        int acc;
        printf("Enter accession number to issue: ");
        scanf("%d",&acc);
        for(int i=0;i<n;i++){
           if(b[i].accession_number==acc){
             if(b[i].number_of_copies>0){
               b[i].number_of_copies--;
               printf("Book issued successfully.\n");
              }else{
                printf("No copies available.\n");
                    }
                }
            }
        }
    else if(choice==7){
        break;
   }
    else{
        printf("Invalid choice.\n");
      }
    }
	printf("\n");
	return 0;
}
