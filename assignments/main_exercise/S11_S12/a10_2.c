#include<stdio.h>

int sum_array(int *arr,int size){
	int i=0,sum=0;
	for(i=0;i<size;i++)
		sum+=arr[i];
	return(sum);
}

float avg_array(int *arr,int size){
	float avg=0.0;
        avg=sum_array(arr,size);
	avg=avg/(float)size;	
	return(avg);
}

int max_array(int *arr,int size){
	int i=0,max=0;
	max=arr[0];
	for(i=0;i<size;i++)
		if(max<arr[i])
			max=arr[i];
	return(max);
}

int min_array(int *arr,int size){
	int i=0,min=0;
	min=arr[0];
	for(i=0;i<size;i++)
		if(arr[i]<min)
			min=arr[i];
	return(min);
}
	

int main(){
	int i=0,size=0,result;
        float average=0;
	printf("Enter the Size of the Array: ");
	scanf("%d",&size);
	int arr[size];
	printf("Enter the Array elements: ");
	for(i=0;i<size;i++)
		scanf("%d",&arr[i]);
	result=sum_array(arr,size);
	printf("Sum of array elements is: %d\n",result);
	average=avg_array(arr,size);
	printf("Average of array elements is: %.2f\n",average);
	result=max_array(arr,size);
	printf("Maximum of array elements is: %d\n",result);
	result=min_array(arr,size);
	printf("Minimum of array elements is: %d\n",result);
	return(0);
}	
