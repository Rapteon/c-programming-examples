/*Program to perform some operations on structures*/
/*AUTHOR: Rapteon; DATE: 2019-08-14*/
#include<stdio.h>
#include<string.h>

int main(){
	struct employee{
		char name[15];
		short int age;
		double salary;
	};
	
	struct employee e1 = {"Suraj Naranatt", 19, 200000};
	
	puts(e1.name);
	printf("%d\n", e1.age);
	printf("%f\n", e1.salary);

	struct employee e2, e3;
	
	strcpy(e2.name, e1.name);  //strcpy(destination, source)
	printf("%s\n", e2.name);

	e2.age = e1.age;
	e2.salary = e1.salary+10000;
	
	e3 = e2;	//Copying a structure variable into another structure variable.
	
	printf("%s %d %f\n", e3.name, e3.age, e3.salary);
}
