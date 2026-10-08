#include <stdio.h>

int main(){
	int size=0, i=0, j=0, variable=1;
	printf("Enter the size of the triangle: ");
	scanf("%d", &size);
	for(i=0;i<size;i++){                          //Loop is number of rows
		for(j=i;j<size;j++){                  //Loop to print spaces
			printf(" ");
		}
		for(j=0;j<=i;j++){                    // Loop to print pascal's triangle values
			if(0==j)                      // if j==0, then value is 1
				variable = 1;
			else
				variable=variable*(i-j+1)/j;    //else value is = value*(i-j+1)/j
			printf("%d ", variable);                //          if i=2, j=1
								//     1*(2-1+1)/1  = 2
		}
	variable=1;                                   //Re-initializing variabvle for next use
	printf("\n");
	}
	return(0);
}
