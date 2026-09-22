#include<stdio.h>


int main(){
	union data{
		char ch;        //1 bytes
		int height;     //4 bytes
		float weight;   //4 bytes
	};
	union data d1;
	printf("Size of Char: %ld\n",sizeof(d1.ch));
	printf("Size of int: %ld\n",sizeof(d1.height));
	printf("Size of float: %ld\n",sizeof(d1.weight));
	printf("Size of Union: %ld\n",sizeof(d1));
	return(0);
}
		
