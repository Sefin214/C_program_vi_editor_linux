#include <stdio.h>


int main(){
	struct data{
		int length;
		int width;
		float height;
	};
	struct data d1 = {10,20,33.33};  //struct with instance d1
	struct data *pointer; //pointer
	pointer=&d1;  //pointer stores the address of the struct
	
	printf("--------Initial Values of Struct---------\n");
	printf("Length is : %d\n",pointer -> length); 
	printf("Width is : %d\n",pointer -> width); 
	printf("Height is : %f\n",pointer -> height); 
	printf("-----------------------------------------\n\n\n");
	pointer -> length = 20; //Changes the values of child members
	pointer -> width = 30; //Changes the values of child members
	pointer -> height = 44.44; //Changes the values of child members
	printf("--------Modified Values of Struct---------\n");
	printf("Length is : %d\n",pointer -> length); 
	printf("Width is : %d\n",pointer -> width); 
	printf("Height is : %f\n",pointer -> height); 
	printf("-----------------------------------------\n");
	return(0);
}
