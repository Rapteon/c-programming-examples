/*
	Program to perform some operations on structures
	AUTHOR: Rapteon; DATE: 2019-08-14
	Compiler: gcc 10.1.0 (use '-std=c99' while compiling)
*/

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
	printf("e1-age: %d\n", e1.age);	//Accessing struct elements using dot notation.
	printf("e1-salary: %f\n", e1.salary);

	struct employee e2, e3;
	
	strcpy(e2.name, e1.name);  //strcpy(destination, source)
	printf("e2-name: %s\n", e2.name);

	e2.age = e1.age;
	e2.salary = e1.salary+10000;
	
	e3 = e2;	//Copying a structure variable into another structure variable.
	
	printf("e3: %s %d %f\n", e3.name, e3.age, e3.salary);

	struct employee* e4;

	e4 = &e3;
	printf("e4: %s %d %f\n", e4->name, e4->age, e4->salary); //Accessing elements using arrow notation.
}
