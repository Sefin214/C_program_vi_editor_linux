#include<stdio.h>


int main(){
	
	struct Student{
		char name[20];
		int age;
		int marks;
	};
	struct Student student1={"Sefin",22,85};
	struct Student student2={"Jerry",20,87};
	struct Student student3={"Alain",18,92};
	struct Student student4={"Anasthesia",21,95};
	struct Student student5={"Anna",20,98};

	printf("--------------------------\n");
	printf("Student name : %s\n",student1.name);
	printf("Student age  : %d\n",student1.age);
	printf("Student marks: %d\n",student1.marks);
	printf("--------------------------\n");
	printf("Student name : %s\n",student2.name);
	printf("Student age  : %d\n",student2.age);
	printf("Student marks: %d\n",student2.marks);
	printf("--------------------------\n");
	printf("Student name : %s\n",student3.name);
	printf("Student age  : %d\n",student3.age);
	printf("Student marks: %d\n",student3.marks);
	printf("--------------------------\n");
	printf("Student name : %s\n",student4.name);
	printf("Student age  : %d\n",student4.age);
	printf("Student marks: %d\n",student4.marks);
	printf("--------------------------\n");
	printf("Student name : %s\n",student5.name);
	printf("Student age  : %d\n",student5.age);
	printf("Student marks: %d\n",student5.marks);
	printf("--------------------------\n");
	return(0);
}
