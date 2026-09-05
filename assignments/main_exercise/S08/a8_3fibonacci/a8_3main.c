#include<stdio.h>
#include "a8_3header.h"

int main(){
	int num=0,result=0;
	printf("Enter the number of Fibonacci series required");
	scanf("%d",&num);
	int arr[num];
	result=fibonacci(num,arr);
	printf("%d,",result); 
	return(0);
}
