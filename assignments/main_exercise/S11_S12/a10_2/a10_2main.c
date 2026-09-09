#include <stdio.h>
#include "header.h"


int main(){
	int i=0,sum=0,max=0,min=0,size=0;
	float avg=0.0;
	printf("Enter the size of the array: ");
	scanf("%d",&size);
	int arr[size];
	printf("Enter the elements of the array");
	for(i=0;i<size;i++)
		scanf("%d",&arr[i]);
	sum=array_sum(arr,size);
	printf("Sum of the elements in the array is: %d\n",sum);
	avg=avg_array(arr,size);
	printf("Average of the elements in the array is: %lf\n",avg);
	max=array_max(arr,size);
	printf("Largest of the elements in the array is: %d\n",max);
	min=array_min(arr,size);
	printf("Smallest of the elements in the array is: %d\n",min);
	return(0);
}

	

