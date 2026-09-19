#include<stdio.h>

void readarray(int size, int *pointer){
	int i=0;
	printf("Enter the array elements \n");
	for(i=0;i<size;i++){
		scanf("%d",pointer);
		pointer+=1;
	}
}

void printarray(int size, int *pointer){
	int i=0;
	for(i=0;i<size;i++){
		printf("%d ",*pointer);
		pointer+=1;
	}
}
	

void reverse(int size, int *pointer){
	int temp=0;
	int *start=pointer;
	int *end=pointer+size-1;
	while(start<end){
		temp=*start;
		*start=*end;
		*end=temp;

		start++;
		end--;
	}
}	
			
