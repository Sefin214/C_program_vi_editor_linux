#include <stdio.h>
#include "A2Q14_lib.h"

int main(){
	FILE *src = NULL, *cpy = NULL;
	char choice = ' ';

	cpy = fopen("copy_source.txt","w");
	src = fopen("source.txt","r");

	// checks if files can be opened
	if(NULL == cpy || NULL == src){
		printf("File unable to open. Exiting menu......\n");
		fclose(src);
		fclose(cpy);
		return (-1);
	}
	
	printf("--------- File custom copy ---------\n");
	printf("a. 1 character at a time. (Hint: fgetc and fputc)\nb. 1 line or n-lines at a time. (Hint: getline, fgets and fputs)\nc. reverse copy. (Hint: fseek, ftell, fgets)\n");
	printf("------------------------------------\n");
	printf("Enter your choice : ");
	scanf("%c", &choice);
	printf("------------------------------------\n");
	switch(choice){
		case 'a':
					cpCharacter(src,cpy);
					break;
		case 'b':   
					cpLine(src,cpy);
					break;
		case 'c':
					cpReverse(src,cpy);
					break;
		default:    
					printf("Wrong Choice. Exiting....");
					break;
	}
	fclose(src);
	fclose(cpy);
	return (0);
}				
				
