#include <stdio.h>
#include <stdlib.h>

//Structure for Employee
struct Employee{
	int Id;
	char name[20];
	int age;
};

int main(){
	int empNum = 0, i = 0;
	FILE *fp;

	printf("Enter the number of Employees : ");
	scanf("%d", &empNum);
	printf("-----------------------------------------------\n");

	struct Employee *emparr;
	emparr = malloc (empNum * sizeof(struct Employee));
	fp = fopen("emp.dat","w");

	if(NULL == emparr || NULL == fp){
	    printf("-----------------------------------------------\n");
		if(NULL == emparr)
			printf("Error in allocating memory\nExiting.........");
		else if(NULL == fp)
			printf("Error in opening the file\nExiting.........");
		printf("-----------------------------------------------\n");
		return(-1);
	}
	
	fprintf(fp, "-----------------------------------------------\n");
	for(i=0;i<empNum;i++){
		printf("Enter the Employee no.%d details \n", (i+1));
		fprintf(fp, "Employee no.%d details \n", (i+1));
		printf("Employee ID : ");
		scanf("%d", &emparr[i].Id);
		fprintf(fp," - Employee %d ID: %d\n", (i+1), emparr[i].Id);
		printf("Employee name : ");
		scanf("%s", emparr[i].name);
		fprintf(fp," - Employee %d Name: %s\n", (i+1), emparr[i].name);
		printf("Employee age : ");
		scanf("%d", &emparr[i].age);
		fprintf(fp," - Employee %d Age: %d\n", (i+1), emparr[i].age);
		printf("-----------------------------------------------\n");
		fprintf(fp, "-----------------------------------------------\n");
	}
	printf("Details are saved to emp.dat succesfully\n");
	printf("-----------------------------------------------\n");
	fclose(fp);
	free(emparr);
	return(0);
}
