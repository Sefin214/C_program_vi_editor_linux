#include<stdio.h>


int main(){
	int a=10;
	int *p; //Initialized pointer variable
	p=&a;
	printf("The address of the variable a with value %d is %p.\n",*p,p);
	return(0);
}
