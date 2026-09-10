#include <stdio.h>


int main(){
	int i=0,j=0,size=0,temp=0;
	printf("Enter the size of the Array : ");
	scanf("%d",&size);
	int arr[size];
	printf("Enter the elements of the Array \n ");
	for(i=0;i<size;i++)         //reading the array
		scanf("%d",&arr[i]);
	printf("Original Array ");
	printf("\n---------------------------------- \n ");
	for(i=0;i<size;i++)  //Printing the original array
		printf("%d ",arr[i]);

	printf("\n---------------------------------- \n ");


	for(i=0;i<size;i++){
		for(j=0;j<size-i-1;j++){
			if(arr[j]>arr[j+1]){  //checking if greater
				temp=arr[j]; //if greater swap
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	printf("Sorted Array ");
	printf("\n---------------------------------- \n ");
	for(i=0;i<size;i++)  //Printing the sorted array
		printf("%d ",arr[i]);
	printf("\n---------------------------------- \n ");

return(0);
}
