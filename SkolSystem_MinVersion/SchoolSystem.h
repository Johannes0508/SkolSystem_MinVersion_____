#pragma once
#include "Student.h"
#include <vector>
#include <iostream>

class SchoolSystem
{
public:
	void Run();
	std::string newName = "";
	int age = 0;
	void AddStudent(std::string newName, int age);
	void RemoveStudent();
	void School_klass();
	void registrerade_elever();

	std::vector<Student> students;
	std::vector<std::string> schoolClasses;
};

