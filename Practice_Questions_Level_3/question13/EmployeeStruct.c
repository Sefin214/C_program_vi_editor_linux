#include <stdio.h>
#include <stdlib.h>

int main(){
	int empNum = 0, i = 0;
	FILE *fp;

	//Structure for Employee
	struct Employee{
		int Id;
		char name[20];
		int age;
	};

	printf("-----------------------------------------------\n");
	printf("Enter the number of Employees : ");
	scanf("%d", &empNum);
	printf("-----------------------------------------------\n");
	struct Employee *emparr;
	emparr = malloc (empNum * sizeof(struct Employee));
	if(NULL == emparr){
		printf("Error in allocating memory\nExiting.........");
		printf("-----------------------------------------------\n");
		return(-1);
	}

	for(i=0;i<empNum;i++){
		printf("Enter the Employee %d details \n", i);
		printf("Employee ID : ");
		scanf("%d", emparr[i].Id);
		printf("Employee name : ");
		scanf("%s", emparr[i].name);
		printf("Employee age : ");
		scanf("%d", emparr[i].age);
	}
	fopen("emp.dat","wb");
	fwrite(emparr,sizeof(*emparr),(size_t)empNum,fp);
	fclose(fp);
	free(emparr);
	return(0);
}
