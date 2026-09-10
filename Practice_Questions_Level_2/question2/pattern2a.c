#include<stdio.h>



int main(){
    int n=0,i=0,j=0,k=0;
    printf("Enter the size of pattern : ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=n;j>i;j--){
            printf("*");
        }
        for(k=0;k<i*2;k++){
            printf(" ");
        }
        for(j=n;j>i;j--){
            printf("*");
        }
    printf("\n");
    }
    for(i=2;i<=n;i++){
        for(j=i;j>0;j--){
            printf("*");
        }
        for(k=(n-i)*2;k>0;k--){
            printf(" ");
        }
        for(j=i;j>0;j--){
            printf("*");
        }
    printf("\n");
    }

}

