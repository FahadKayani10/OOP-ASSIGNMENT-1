#include "Student.h"
#include<iostream>
// constructor aur destructor implementations
Student::Student() {//default constructor
	name = "Unknown";
	age = 0;
	rollNo = 0;
	gpa = 0.0;
}
Student::Student(string n, int a, int r, float g) {//parameterized constructor
	name = n;
	age = a;
	rollNo = r;
	gpa = g;
}
Student::~Student() {
	cout << "Destructor called for Student: " << name << endl;
}
// setter methods implementations
void Student::setName(string n) {
	name = n;
}
 void Student::setAge(int a) {
	age = a;
 }
 void Student::setRollNo(int r) {
	 rollNo = r;
 }
 void Student::setGPA(float g) {
	 gpa = g;
 }
 // getter methods implementations
 string Student::getName() {
	 return name;
 }
 int Student::getAge() {
	 return age;
 }
 int Student::getRollNo() {
	 return rollNo;
 }
 float Student::getGPA() {
	 return gpa;
 }
 // grade calculation methods implementations
 void Student::calculateGrade() {
	 if (gpa >= 3.5) {
		 cout << " | Grade: A" << endl;
	 }
	 else if (gpa >= 2.5) {
		 cout << " | Grade: B" << endl;
	 }
	 else if (gpa >= 1.5) {
		 cout << " | Grade: C" << endl;
	 }
	 else {
		 cout << " | Grade: F" << endl;
	 }
 }
 // display method implementations
 void Student::displayInfo() {
	 cout << " |  Name : " << name;
	 cout << " | Age : " << age;
	 cout << " | Roll No : " << rollNo;
	 cout << " | GPA: " << gpa;
 }

