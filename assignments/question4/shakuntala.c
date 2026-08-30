/*3. 4. Write a menu based C program with following options.
	a. Find a number is Shakuntala Devi's number or not.
	b. Print range of Shakuntala Devi's numbers.
	c. Exit. */
#include <stdio.h>

int Factorial(int val){
    int prod = 1, temp = 0, d=0, i=0, sum=0;
    temp = val;
    while(temp != 0){
        d=temp%10;
        prod=1;
        for(i=1;i<=d;i++){
        prod=prod*i;
        }
        sum=sum+prod;
        temp=temp/10;
    }
    if(sum == val)
        return(1);
    else
        return(0);
}

int main(){ 
    char ch = ' ';
    int no = 0, f = 0;
    int lower = 0, upper = 0, i = 0; 
        printf("\nEnter the choice for the following options\n[a] Find a number is Shakuntala Devi's Number or Not\n[b] Print range of Shakuntala Devi's Number \n[c] Exit\n");
        printf("Enter the choice :");
        scanf(" %c", &ch); 

        switch(ch){
            case 'a': 
                printf("Enter the number to check if Shakuntala Devi's Number or not: ");
                scanf("%d", &no);
                f = Factorial(no);
                if(1 == f) 
                    printf("%d is a Shakuntala Devi's Number\n", no);
                else
                    printf("%d is Not a Shakuntala Devi's Number\n", no);
                break;  
                
            case 'b': 
                printf("Enter lower limit: ");
				scanf("%d", &lower);
				printf("Enter upper limit: ");
                scanf("%d", &upper);
                printf("Shakuntala Devi's Numbers in range: ");
                for(i = lower; i <= upper; i++) {
                    if(1 == Factorial(i) ) {
                        printf("%d ", i);
                    }
                }
                printf("\n");
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
