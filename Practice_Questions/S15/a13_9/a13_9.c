#include<stdio.h>
#include "header.h"

int main(){
	int size=0;
	int *pointer=0;
	printf("Enter the size of Array : ");
	scanf("%d",&size);
	int array[size]; //Declared array of size 10 with elements
	pointer=array;
	readarray(size,pointer);
	printf("The original array is \n ");
	printarray(size,pointer);
	reverse(size,pointer);
	printf("\nThe reversed array is \n ");
	printarray(size,pointer);
	printf("\n ");
	return(0);
}
