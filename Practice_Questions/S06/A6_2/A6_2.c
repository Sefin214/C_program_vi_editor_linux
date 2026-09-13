#include<stdio.h>


int main(){
	int num1=0,num2=0,num3=0; // holds the numbers to check largest among them.
	printf("Enter the numbers to check whether positive, negative or zero\n");
	printf("Enter the number1 :  ");
	scanf("%d",&num1);
	printf("Enter the number2 :  ");
	scanf("%d",&num2);
	printf("Enter the number3 :  ");
	scanf("%d",&num3);
	if(num1>num2&&num1>num3)	
		printf("%d is the largest number\n",num1);
		else if(num2>num1&&num2>num3)
			printf("%d is the largest number\n",num2);
			else
				printf("%d is the largest number",num3);
	return(0);
}
