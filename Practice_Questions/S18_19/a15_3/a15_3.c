#include<stdio.h>


int main(){
	int i=0;
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


	struct Student highest_score=data[0];  // setting first mark as highest initially

	for(i=0;i<5;i++){
		if(data[i].marks>highest_score.marks)  //checks and finds the highest score
			highest_score=data[i];   //stores the data of student having highest score
	}
	printf("----------------------------------------------\n");
	printf("The best performer is %s with a score of %d%% \n",highest_score.name,highest_score.marks);
	printf("----------------------------------------------\n");
	return(0);
}
