#include<stdio.h>


int main(){
	int num1=0,num2=0,max=0;
	printf("Finding largest number among two.\n");
	printf("Enter the first number: ");
	scanf("%d",&num1);
	printf("Enter the second number: ");
	scanf("%d",&num2);
	if(num1>num2)
		printf("%d is the largest number\n",num1);
		else if(num2>num1)
			printf("%d is the largest number\n",num2);
			else
				printf("Numbers are equal\n");
		
	return(0);
}
