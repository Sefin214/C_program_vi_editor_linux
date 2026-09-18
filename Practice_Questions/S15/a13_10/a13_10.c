#include<stdio.h>


int main(){
	int length=0;
	char *pointer=0;
	char str[]="Hello Bro";
	pointer=str;
	while(*pointer!='\0'){
		length+=1;
		pointer+=1;
	}
	pointer=str;
	printf("Length of the array-------------> %s <------------is : %d.\n",str,length);
	return(0);
}
