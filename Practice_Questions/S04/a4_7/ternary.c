#include<stdio.h>

int main(){
    int a=0,b=0,max=0;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the Second number: ");
    scanf("%d",&b);
    max=(a>b)?a:b;
    printf("Maximum of two numbers is: %d\n",max);
    return(0);
}