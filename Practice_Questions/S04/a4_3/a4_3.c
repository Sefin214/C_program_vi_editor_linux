#include<stdio.h>


int main(){
	int num=0;
	printf("Finding number is Even or Not .\n");
	printf("Enter the number: ");
	scanf("%d",&num);
	if(num%2==0)
		printf("%d is Even Number\n",num);
		else
			printf("%d is Odd Number\n",num);
	return(0);
		
}
