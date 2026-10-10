#include <stdio.h>

void cpCharacter( FILE *src, FILE *cpy){
    char character = ' ';
	while((character = fgetc(src)) != EOF){
		fputc(character, cpy);
	}
	printf("File contents copied Successfully to copy_source.txt");
	printf("\n------------------------------------\n");
}

void cpLine( FILE *src, FILE *cpy){
    char buffer[100];
	while((fgets(buffer,sizeof(buffer),src)) != NULL){
		fputs(buffer,cpy);
	}
}

void cpReverse( FILE *src, FILE *cpy){
    long position = 0;
    char character = ' ';
	fseek(src,-1,SEEK_END);
	position = ftell(src);
	while(position >= 0){
		character = fgetc(src);
		fputc(character, cpy);
		position -= 1;
	    fseek(src,position,SEEK_SET);
	}
	printf("Reversed file contents copied Successfully to copy_source.txt");
	printf("\n------------------------------------\n");
}
