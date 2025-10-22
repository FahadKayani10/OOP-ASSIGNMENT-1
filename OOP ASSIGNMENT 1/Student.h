#include<iostream>
#include<string>
using namespace std;
// sab se pehle ek class banani hai jiska naam Student hoga
class Student {
private:// private data members (encapsulation)
	string name;
	int age;
	int rollNo;
	float gpa;
public:// function members
	// constructor aur destructor interface
	Student();
	Student(string n, int a, int r, float g=0.0);
	~Student();
	// setter methods
	void setName(string n);
	void setAge(int a);
	void setRollNo(int r);
	void setGPA(float g);
	// getter methods
	string getName();
	int getAge();
	int getRollNo();
	float getGPA();
	// display and grade calculation methods (abstraction)
	void calculateGrade();
	void displayInfo();
};