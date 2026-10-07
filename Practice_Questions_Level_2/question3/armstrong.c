/*3. Write a menu based C program with following options.
	a. Find a number is Armstrong number or not.
	b. Print range of Armstrong numbers.
	c. Exit.*/

#include <stdio.h>
int Armstrong(int val){
    int n=0, sum=0, temp=0, c=0, pow=1, i=0;
    temp = val;
    while(temp != 0){   //Getting the number of digits to use power
        n = temp % 10;  //Extracts rightmost digit
        c++; 
        temp = temp / 10; //updates number by removing rightmost number
    }
    temp=val;
    while(temp != 0){
        n = temp % 10;
        for(i=0;i<c;i++){    //Loop to calculate power of each extracted digit
            pow=pow*n;
        }
        sum = sum + pow;     //Sum of all powered digits in the number
        temp = temp / 10;
        pow=1;               //Re-initialising the power variable for the next operation
    }
    if(sum == val)
        return(1);          //returns 1 if armstrong
    else
        return(0);           // returns 0 if not armstrong
}

int main(){ 
    char ch = ' ';
    int no = 0, f = 0;
    int lower = 0, upper = 0, i = 0; 
    printf("\nEnter the choice for the following options\n[a] Find a number is Armstrong or Not\n[b] Print range of Armstrong Number\n[c] Exit\n");
    printf("Enter the choice :");
    scanf(" %c", &ch); 
    
    switch(ch){
        case 'a': 
                printf("Enter the number to check if armstrong or not: ");
                scanf("%d", &no);
		if(no>=0){
                    f = Armstrong(no);    //Armstrong returns 1 if number is Armstrong and 0 if not Armstrong
                    if(1 == f) 
                        printf("%d is an Armstrong Number\n", no);
                    else
                        printf("%d is Not an Armstrong Number\n", no);
		}
		else{
		    printf("\nEntered number is a negative number, cannot be considered for Armstrong number.\nExiting .......\n");
		    return(0);
		}
                break;  
        case 'b': 
                printf("Enter lower limit: ");
		scanf("%d", &lower);
		printf("Enter upper limit: ");
                scanf("%d", &upper);
		if(lower>=0 && upper>=0){
                    printf("Armstrong numbers in range: ");
                    for(i = lower; i <= upper; i++) {          // Loop to iterate through all numbers between the user given range
                        if(Armstrong(i) == 1) {                // Prints only the armstrong number
                            printf("%d ", i);
                        }
                    }
                    printf("\n");
		}
		else{
		    printf("\nEntered range has a negative number, cannot be considered for Armstrong number.\nExiting .......\n");
		    return(0);
		}
                break;
        case 'c': 
                printf("Exited\n");
		break;
        default:
                printf("Invalid choice! Try again.\n");
                break;
        }
    
    return(0);
}
