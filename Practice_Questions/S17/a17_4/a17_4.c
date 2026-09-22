#include<stdio.h>


int main(){
	union data{
		char ch;        //1 bytes
		int height;     //4 bytes
		float weight;   //4 bytes
	};
	struct data1{
		char ch;        //1 bytes
		int height;     //4 bytes
		float weight;   //4 bytes
	};
	union data d1;
	struct data1 d2;
	printf("-----------------Union---------------\n");
	printf("Size of Char: %ld\n",sizeof(d1.ch));
	printf("Size of int: %ld\n",sizeof(d1.height));
	printf("Size of float: %ld\n",sizeof(d1.weight));
	printf("\nSize of Union: %ld\n",sizeof(d1));
	printf("-----------------------------------------\n");
	printf("-----------------Structure---------------\n");
	printf("Size of Char: %ld\n",sizeof(d2.ch));
	printf("Size of int: %ld\n",sizeof(d2.height));
	printf("Size of float: %ld\n",sizeof(d2.weight));
	printf("\nSize of Struct: %ld\n",sizeof(d2));
	printf("-----------------------------------------\n");
	return(0);
}
		
