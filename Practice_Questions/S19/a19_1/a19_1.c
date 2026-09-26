#include <stdio.h>
#define PI 3.14159
#define MAX(a,b) ((a)>(b)?(a):(b)) 
#define MIN(a,b) ((a)<(b)?(a):(b)) 

int main(){
	int radius = 0, num1 = 0, num2 = 0;	
	printf("Enter the radius to get area of circle : ");
	scanf("%d",&radius);
	printf("Radius of circle is : %.2f\n", PI*radius*radius);
	printf("Enter the Numbers to check MAX and MIN : ");
	scanf("%d %d",&num1,&num2);
	printf("Maximum of %d and %d is : %d\n",num1,num2,MAX(num1,num2));
	printf("Minimum of %d and %d is : %d\n",num1,num2,MIN(num1,num2));
	return(0);
}

	
