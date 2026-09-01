#include<stdio.h>


int main(){
	int num1=0,num2=0,choice=0,result=0;
	printf("Calculator-------------------\n[1] Addition\n[2] Subtraction\n[3] Division\n[4] Multiplication");
	printf("\nEnter the option from above to do the corresponding calculation: ");
	scanf("%d",&choice);
	switch(choice){
		case 1:	 	
			printf("Enter the first number: ");
			scanf("%d",&num1);
			printf("Enter the second number: ");
			scanf("%d",&num2);
			result=num1+num2;
			printf("The Sum is: %d\n",result);
			break;
		case 2:	 	
			printf("Enter the first number: ");
			scanf("%d",&num1);
			printf("Enter the second number: ");
			scanf("%d",&num2);
			result=num1-num2;
			printf("The Difference is: %d\n",result);
			break;
		case 3:	 	
			printf("Enter the first number: ");
			scanf("%d",&num1);
			printf("Enter the second number: ");
			scanf("%d",&num2);
			result=num1/num2;
			printf("The Qoutient is: %d\n",result);
			break;
		case 4:	 	
			printf("Enter the first number: ");
			scanf("%d",&num1);
			printf("Enter the second number: ");
			scanf("%d",&num2);
			result=num1*num2;
			printf("The Product is: %d\n",result);
			break;
		default:
			printf("Invalid Choice");
		        break;
		}
	return(0);
}
