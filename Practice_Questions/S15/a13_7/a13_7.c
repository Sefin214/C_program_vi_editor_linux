#include<stdio.h>


int main(){
	int i=0,sum=0;
	int *pointer=0;
	int array[10]={0,1,2,3,4,5,6,7,8,9}; //Declared array of size 10 with elements
	pointer=array;
	for(i=0;i<10;i++){
		sum+=*pointer;
		pointer+=1;  // Pointer gets incremented in each iteration.
	}
	printf("Sum of array elements is : %d.\n",sum);
	return(0);
}
