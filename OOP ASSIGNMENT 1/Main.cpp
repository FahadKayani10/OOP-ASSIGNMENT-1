#include "student.h"
#include <iostream>
int main() {
	//creating objects of Student class
	Student s1;//default constructor called
	s1.setName("Ali");//setting values using setter methods 
	s1.setAge(19);
	s1.setRollNo(1);
	s1.setGPA(3.2);
	s1.displayInfo();
	s1.calculateGrade();
	//parameterized constructor called
	Student s2("Fahad", 20, 3, 3.8);
	s2.displayInfo();
	s2.calculateGrade();
	//constructor overloading 
	Student s3("Kayani", 22, 5);//gpa default value = 0.0
	s3.setGPA(2.4);//setting gpa using setter method
	s3.displayInfo();
	s3.calculateGrade();

	system("pause");
	return 0;
}