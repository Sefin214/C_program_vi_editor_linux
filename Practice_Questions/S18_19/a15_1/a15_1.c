#include<stdio.h>


int main(){
	
	struct Student{
		char name[20];
		int age;
		int marks;
	};
	struct Student student1={"Sefin",22,85};
	printf("Student name : %s\n",student1.name);
	printf("Student age  : %d\n",student1.age);
	printf("Student marks: %d\n",student1.marks);
	return(0);
}
