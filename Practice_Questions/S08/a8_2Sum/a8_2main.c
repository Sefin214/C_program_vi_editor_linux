#include <stdio.h>
#include "a8_2header.h"

int main(){
	int num=0,result=0;
	printf("Enter the number to find the sum of numbers from 1...N: ");
	scanf("%d",&num);
	result=numsum(num);
	printf("Sum of numbers from 1....%d is %d\n",num,result);
	return(0);
}
