FUNCTIONS IN C FILE HANDELING

OPENING A FILE
// before a file can be opened 
FILE *fptr; // creating a file handle
// we need to open a file before we can perform any operations on a file
fptr= fopen(char *filename, char *mode)//return a memory location or NULL if it fails
fclose(fptr)
// need to close a opened file as there is a limit on number of files that can be opened at a time
// returns 0 if successful otherwise returns -1

READING DATA FROM A FILE
int getc(fptr); //returns the unsign character or EOF
int fscanf(fptr,char *format);// returns number of input items converted and assigned
char *fgets(char *s,int n, fptr);//returns char array s or NULL

WRITING DATA INTO A FILE
int fputc(int c, fptr);// returns the unsigned character written of EOF
int fprintf(fptr, char *format);// returns number of character written of negative value
int fputs(char *s, fptr);//returns non negative value or EOF

END OF FILE
int feof(fptr);// returns TRUE if end of file reached or FALSE

RANDOM ACCESS
fseeks(fptr,long int ofset, origin);// sets the current position to new position, returns 0 if successful or negative

