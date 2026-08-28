#include<stdio.h>



int main(){
    int n=0,i=0,j=0;
    printf("Enter the size of pattern : ");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        for(j=0;j<i;j++){
            printf("* ");
        }
    printf("\n");
    }
}


