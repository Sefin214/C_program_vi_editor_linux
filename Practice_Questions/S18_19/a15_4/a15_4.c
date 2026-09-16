#include<stdio.h>


int main(){
	int i=0;
	float avg=0.0;
	struct Student{
		char name[20];
		int age;
		int marks;
	};
	struct Student data[]={   //Declaring struct as an array
	{"Sefin",22,85},
	{"Jerry",20,87},
	{"Alain",18,92},
	{"Anesthasia",21,95},
	{"Anna",20,98}};

	for(i=0;i<5;i++){
		avg=avg+data[i].marks;   //Finds the Sum of everyones marks
	}
	avg=avg/5;  //finds average of 5 marks
	printf("----------------------------------------------\n");
	printf("The average of marks scored by 5 students is %.2f \n",avg);
	printf("----------------------------------------------\n");
	return(0);
}
