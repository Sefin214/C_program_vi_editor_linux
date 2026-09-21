#include<stdio.h>


int main(){
	union data{
		char ch;        //1 bytes
		int height;     //4 bytes
		float weight;   //4 bytes
	};
	union data d1;
	d1.ch='A';
	printf("Char ch: %c\n",d1.ch);
	d1.height=20;
	printf("int height: %d\n",d1.height);
	d1.weight=85.65;
	printf("float weight: %f\n",d1.weight);
	return(0);
}
		
