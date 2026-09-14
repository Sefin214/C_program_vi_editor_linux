#include<stdio.h>


int main(){
	int i=0,size1=0,size2=0;
	printf("Enter the Size of the Array1: ");
	scanf("%d",&size1);
	printf("Enter the Size of the Array2: ");
	scanf("%d",&size2);
	if(size1<=0 || size2<=0){
		printf("We cannot work with this size for the array, Rerun the program with better array sizes!\n");
		return(0);
	}
	else{
	int arr1[size1+size2]; //to store elements from both arrays we add the sizes
	int arr2[size2];
	printf("Enter the Array elements for the first array: ");
	for(i=0;i<size1;i++)
		scanf("%d",&arr1[i]);
	printf("Enter the Array elements for the second array: ");
	for(i=0;i<size2;i++)
		scanf("%d",&arr2[i]);
	for(i=0;i<size2;i++)
		arr1[size1+i]=arr2[i];
	printf("The Merged Array is-----------------\n ");
	for(i=0;i<(size1+size2);i++)
		printf("%d,",arr1[i]);
	printf("\n----------------------------------\n ");
	return(0);
	}
}	
