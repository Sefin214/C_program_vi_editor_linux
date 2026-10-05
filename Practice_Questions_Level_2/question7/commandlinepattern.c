#include<stdio.h>
#include<string.h>

//usage function to throw errors if the command line argument is wrong
void usage(void){
	printf("\n----------------------------------\n");
	printf("\nUsage: outputfile <pattern-text>\n");      //Message to the user regarding the usage
	printf("\n----------------------------------\n");
}

int main(int argc, char *argv[]){
	int j=0, len=0, i=0, sc=0;
	
	// Checks if exact 1 argument is given by the user excluding the outputfile name
	if(argc <= 1 || argc > 2){
		usage();  //Calls the user defined usage function
		return(-1);
	}

	len=strlen(argv[1]);
	if(len <= 2){
		printf("\n The text entered is having 2 characters or below, text size of 3 and above characters is recommended for better output.\n -> Enter 1: To continue anyway. \n -> Enter 0: To exit. \n"); 
		scanf("%d",&sc);
		if(0 == sc){
			printf("Exiting.....\n");
			return(-1);
		}
		else if(1 == sc){
			printf("Executing.....\n");
		}
		else{
			printf("Wrong Entry.....\nExiting.....\n");
			return(0);
		}
	}
	// Logic to display the pattern
	for(i=0;i<len;i++){
		for(j=0;j<len;j++){
			if(0==i)
				printf("%c ",argv[1][j]);  //prints the top-most row
			else if(0==j)
				printf("%c ",argv[1][i]);  //prints the left-most column
			else if((len-1)==i) 
				printf("%c ",argv[1][len-j-1]);  //prints the bottom-most column
			else if((len-1)==j)
				printf("%c ",argv[1][len-i-1]);  //prints the right-most column
			else
				printf("  ");  //prints spaces for every other positions
		}
	printf("\n");
		}
	return(0);
}
	
