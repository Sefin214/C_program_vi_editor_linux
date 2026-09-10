/*3. Write a menu based C program with following options.
	a. Find a number is Armstrong number or not.
	b. Print range of Armstrong numbers.
	c. Exit.*/
#include <stdio.h>

int Armstrong(int val){
    int n=0, sum=0, temp=0, c=0, pow=1, i=0;
    temp = val;
    while(temp != 0){
        n = temp % 10;
        c++; 
        temp = temp / 10;
    }
    temp=val;
    while(temp != 0){
        n = temp % 10;
        for(i=0;i<c;i++){
            pow=pow*n;
        }
        sum = sum + pow; 
        temp = temp / 10;
        pow=1;
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


        printf("\nEnter the choice for the following options\n[a] Find a number is Armstrong or Not\n[b] Print range of Armstrong Number\n[c] Exit\n");
        printf("Enter the choice :");
        
      
        scanf(" %c", &ch); 

        switch(ch){
            case 'a': 
                printf("Enter the number to check if armstrong or not: ");
                scanf("%d", &no);
                f = Armstrong(no);
                if(1 == f) 
                    printf("%d is an Armstrong Number\n", no);
                else
                    printf("%d is Not an Armstrong Number\n", no);
                break;  
                
            case 'b': 
                printf("Enter lower limit: ");
				scanf("%d", &lower);
				printf("Enter upper limit: ");
                scanf("%d", &upper);
                printf("Armstrong numbers in range: ");
                for(i = lower; i <= upper; i++) {
                    if(Armstrong(i) == 1) {
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
