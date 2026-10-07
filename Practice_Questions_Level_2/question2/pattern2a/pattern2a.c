#include<stdio.h>
int main(){
    int n=0,i=0,j=0,k=0;
    printf("Enter the size of pattern : ");
    scanf("%d",&n);
    //pattern upper half logic

    for(i=0;i<n;i++){              // Loop for number of rows
        for(j=n;j>i;j--){          // Loop for printing "*" on left
            printf("*");
        }
        for(k=0;k<i*2;k++){        // Loop for printing the spaces
            printf(" ");
        }
        for(j=n;j>i;j--){          // Loop for printing remaining "*" on right
            printf("*");
        }
    printf("\n");
    }
    
    //pattern bottom half logic

    for(i=2;i<=n;i++){             // Loop for number of rows
        for(j=i;j>0;j--){          // Loop for printing "*" on left
            printf("*");
        }
        for(k=(n-i)*2;k>0;k--){    // Loop for printing spaces
            printf(" ");
        }
        for(j=i;j>0;j--){          // Loop for printing remaining "*" on right
            printf("*");
        }
    printf("\n");
    }

}

