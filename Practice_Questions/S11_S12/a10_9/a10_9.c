#include<stdio.h>


int main(){
	int i=0,j=0,size1=0,pos=0,flag=0;
	printf("Enter the Size of the Array1: ");
	scanf("%d",&size1);
	if(size1<=0){
		printf("We cannot work with this size for the array, Rerun the program with better array sizes!\n");
		return(0);
	}
	else{
	int arr1[size1]; 
	int arr2[size1];
	printf("Enter the Array elements for the first array: ");
	for(i=0;i<size1;i++)
		scanf("%d",&arr1[i]);
	for(i=0;i<size1;i++){
		flag=0;
		for(j=0;j<pos;j++){
			if(arr1[i]==arr2[j]){
				flag=1;
				break;
			}
		}
		if(flag==0)
				arr2[pos++]=arr1[i];
	}
	printf("The Modified Array without any duplicate elements \n---------------------------------\n ");
	for(i=0;i<pos;i++){
		printf("%d",arr2[i]);
		if(i<(pos-1))
			printf(", ");
	}
	printf("\n---------------------------------\n ");
	return(0);
	}
}	
