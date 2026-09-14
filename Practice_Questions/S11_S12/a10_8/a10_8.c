#include<stdio.h>


int main(){
	int i=0, j=0, size1=0, pos=0, count=0, flag=0;
	printf("Enter the Size of the Array1: ");
	scanf("%d",&size1);
	if(size1<=0){
		printf("We cannot work with this size for the array, Rerun the program with better array sizes!\n");
		return(0);
	}
	else{
	int arr1[size1]; 
	int arr2[size1]; //To store extracted elements (non-duplicates)
	int freq[size1]; //To store the frequency of each element
	printf("Enter the Array elements for the array: ");
	for(i=0;i<size1;i++)
		scanf("%d",&arr1[i]);
	for(i=0;i<size1;i++){
		count=0;
		flag=0;
		for(j=0;j<size1;j++){
			if(arr1[i]==arr1[j]){
				count+=1;
			}
			if(arr1[i]==arr2[j]){
				flag=1;
				break;
			}
		}
		if(count>1 && 0==flag){
				arr2[pos]=arr1[i];
				freq[pos]=count;
				pos+=1;
		}
	}
	printf("The Array elements along with their frequency \n---------------------------------\n\n");
	for(i=0;i<pos;i++){
		printf("%d appears %d times \n",arr2[i],freq[i]);
	}
	printf("\n---------------------------------\n ");
	return(0);
	}
}	
