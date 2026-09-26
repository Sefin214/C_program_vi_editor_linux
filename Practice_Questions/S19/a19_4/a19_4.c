#include <stdio.h>
#define num 21

int main(){
	#ifdef num
		printf("num is defined\n");
	#endif

	#ifndef num1
		printf("num1 is not defined\n");
	#endif

	#if num==21
		printf("num is 21\n");
	#else
		printf("num is not 21\n");
	#endif
	return(0);
}
