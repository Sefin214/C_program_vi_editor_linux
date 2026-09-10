#include <stdio.h>
#include "a8_4header.h"

int main(){
	int num=0,result=0,pow=0;
	printf("Enter the number to find the power: ");
	scanf("%d",&num);
	printf("Enter the power: ");
	scanf("%d",&pow);
	result=power(num,pow);
	printf("Power of %d to %d is : %d \n",num,pow,result);
	return(0);
}
