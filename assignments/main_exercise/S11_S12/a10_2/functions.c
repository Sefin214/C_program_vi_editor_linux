int array_sum(int *arr, int size){
	int sum=0,i=0;
	for(i=0;i<size;i++)
		sum=sum+arr[i];
	return(sum);
}	
float avg_array(int *arr, int size){
	float avg=0.0;
	int sum=0;
	sum=array_sum(arr,size);
	avg=(float)sum/size;
	return(avg);
}	
int array_max(int *arr, int size){
	int max=arr[0],i=0;
	for(i=0;i<size;i++)
		if(max<arr[i])
			max=arr[i];
	return(max);
}	
int array_min(int *arr, int size){
	int min=arr[0],i=0;
	for(i=0;i<size;i++)
		if(arr[i]<min)
			min=arr[i];
	return(min);
}	
