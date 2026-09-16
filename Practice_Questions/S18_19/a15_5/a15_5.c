#include<stdio.h>


int main(){
	int i=0,roll=0;
	struct Student{
		char name[20];
		int rollno;
		int marks;
	};
	struct Student data[]={   //Declaring struct as an array
	{"Sefin",01,85},
	{"Jerry",02,87},
	{"Alain",03,92},
	{"Anesthasia",04,95},
	{"Anna",05,98}};

	printf("Enter the Roll numberto search (01-05) : ");
	scanf("%d",&roll);

	for(i=0;i<5;i++){
		if(data[i].rollno == roll){  //checks and finds the highest score
			printf("----------------------------------------------\n");
			printf("Name    : %s \n",data[i].name);
			printf("Roll no : %d \n",data[i].rollno);
			printf("Marks   : %d \n",data[i].marks);
			printf("----------------------------------------------\n");
		}
	}
	return(0);
}
