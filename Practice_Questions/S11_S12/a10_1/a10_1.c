#include<stdio.h>


int main(){
	int i=0,size=0;
	printf("Enter the Size of the Array: ");
	scanf("%d",&size);
	int arr[size];
	printf("Enter the Array elements: ");
	for(i=0;i<size;i++)
		scanf("%d",&arr[i]);
	printf("The Array is-----------------\n ");
	for(i=0;i<size;i++)
		printf("%d,",arr[i]);
	printf("\n-----------------------------\n ");
	return(0);
}	
