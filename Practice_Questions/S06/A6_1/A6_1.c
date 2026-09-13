#include<stdio.h>


int main(){
	int num=0; // holds the number to check
	printf("Enter the number to check whether positive, negative or zero : ");
	scanf("%d",&num);
	if(num>0)	
		printf("The number is a positive number\n");
		else if(num<0)
			printf("The number is a negative number\n");
			else
				printf("Number is zero\n");
	return(0);
}
