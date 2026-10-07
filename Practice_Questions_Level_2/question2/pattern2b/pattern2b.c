#include<stdio.h>
int main(){
    int n=0,i=0,j=0,k=0;
    printf("Enter the size of pattern : ");
    scanf("%d",&n);

    //Logic for printing upper diamond
    for(i=0;i<n;i++){             // Loop for number of rows
        for(k=n;k>i;k--){         // Loop to print spaces
            printf(" ");
        }
        for(j=0;j<i;j++){         // Loop to print "*" on the upper diamond
            printf("* ");
        }
    printf("\n");
    }

    //Logic for printing lower diamond 
    for(i=0;i<n;i++){             // Loop for number of rows
        for(k=0;k<i;k++){         // Loop to print the spaces
            printf(" ");
        }
        for(j=n;j>i;j--){         // Loop to print "*" on the lower diamond
            printf("* ");
        }
    printf("\n");
    }
    return(0);
}
