#include <stdio.h>
int main(){
	int i=0,j=0,row,col;
	printf("Enter the size of rows: ");
	scanf("%d",&row);
	printf("Enter the size of columns: ");
	scanf("%d",&col);
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("%d ",i*col+j);
		}
		printf("\n");
	}
	return(0);
}
