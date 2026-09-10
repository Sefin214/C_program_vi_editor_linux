#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[]){
	int i=0, j=0, len=0;
	len=strlen(argv[1]);
	for(i=0;i<len;i++){
		for(j=0;j<len;j++){
			if(0==i)
				printf("%c ",argv[1][j]);
			else if(0==j)
				printf("%c ",argv[1][i]);
			else if((len-1)==i) 
				printf("%c ",argv[1][len-j-1]);
			else if((len-1)==j)
				printf("%c ",argv[1][len-i-1]);
			else
				printf("  ");
		}
	printf("\n");
	}
	return(0);
}
	
