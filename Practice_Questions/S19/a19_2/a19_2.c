#include <stdio.h>
#define SQUARE(x) (x)*(x)
#define CUBE(x) (x)*(x)*(x)
#define MAX(a,b) ((a)>(b)?(a):(b)) 

int main(){
	int num1 = 0, num2 = 0;	
	printf("Enter the Number to do square operation : ");
	scanf("%d",&num1);
	printf("Square of %d is : %d\n",num1,SQUARE(num1));
	printf("Enter the Number to do Cube operation : ");
	scanf("%d",&num1);
	printf("Cube of %d is : %d\n",num1,CUBE(num1));
	printf("Enter the Numbers to check MAX and MIN : ");
	scanf("%d %d",&num1,&num2);
	printf("Maximum of %d and %d is : %d\n",num1,num2,MAX(num1,num2));
	return(0);
}

	
