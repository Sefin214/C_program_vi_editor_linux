#include<stdio.h>
#include "factorialhead.h"

int main(){
	int num=0,result=0;
	printf("Enter the number to get the factorial: ");
	scanf("%d",&num);
	result=factorial(num);
	printf("Factorial of %d is %d\n",num,result);
	}
