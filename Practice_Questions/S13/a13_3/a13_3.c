#include<stdio.h>


int main(){
	int number=10;
	int *pointer=0;
	printf("Number before modification is : %d\n",number);
	pointer=&number;
	*pointer=21;
	printf("Number after modification is  : %d\n",number);
	return(0);
}
