#include<stdio.h>
int main(){
    int n=0,i=0,j=0;
    printf("Enter the size of pattern : ");  //Reads the size of the pattern
    scanf("%d",&n);
    printf("------------------- pattern ----------------\n");
    for(i=0;i<n;i++){    //for loop to iterate thorugh rows
        for(j=0;j<=i;j++){   //for loop to iterate through colomns
            printf("*"); 
        }
    printf("\n");  //to print new line affter each row is printed
    }
    printf("------------------- pattern ----------------\n");
    return(0);
}


