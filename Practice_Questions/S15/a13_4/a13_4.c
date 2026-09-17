#include<stdio.h>


int main(){
	int a=10;
	char ch='S';
	float f=21.4;
	double d=21.44214214214;
	int *p1; //Initialized pointer variable
	char *p2; //Initialized pointer variable
	float *p3; //Initialized pointer variable
	double *p4; //Initialized pointer variable
	p1=&a;
	printf("The address of the variable a with value %d is %p.\n",*p1,p1);
	p2=&ch;
	printf("The address of the variable a with value %c is %p.\n",*p2,p2);
	p3=&f;
	printf("The address of the variable a with value %f is %p.\n",*p3,p3);
	p4=&d;
	printf("The address of the variable a with value %lf is %p.\n",*p4,p4);
	return(0);
}
