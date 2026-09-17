#include<stdio.h>


int main(){
	int i=0;
	int *pointer=0;
	int array[10]={0,1,2,3,4,5,6,7,8,9}; //Declared array of size 10 with elements
	pointer=array;
	for(i=0;i<10;i++){
		printf("Element in array[%d] is : %d | at the adress -> %p.\n",i,*pointer,pointer);
		pointer+=1;  // Pointer gets incremented in each iteration.
	}
	return(0);
}
