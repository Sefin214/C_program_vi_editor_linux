#include<stdio.h>


int main(){
	int number=0;
	int *pointer=0;
	pointer=&number;
	printf("Enter the number : ");
	scanf("%d",pointer);
	printf("The number is %d and stored at address %p.\n",*pointer,pointer);
	return(0);
}

