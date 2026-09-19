#include<stdio.h>


int main(){
	int i=0,max=0,size=0;
	int *pointer=0;
	printf("Enter the size of Array : ");
	scanf("%d",&size);
	int array[size]; //Declared array of size 10 with elements
	pointer=array;
	printf("Enter the Array elements\n");
	for(i=0;i<size;i++){
		scanf("%d",pointer);
		pointer+=1;
	}
	pointer=array;
	max=*pointer;
	for(i=0;i<size;i++){
		if(max<*pointer){
			max=*pointer;
		}
		pointer+=1;  // Pointer gets incremented in each iteration.
	}
	printf("Largest element in the array is : %d.\n",max);
	return(0);
}
