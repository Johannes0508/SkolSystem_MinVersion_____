#include "SchoolSystem.h"
#include <iostream>
#include <string>
#include <vector>


//mycket utav namnen på funktionerna kommer ändras och så!!


using namespace std;
string arr1[20], arr2[20], arr3[20], arr4[20], arr5[20];
int total = 0;

void add_student() {
	int choice;
	cout << "how many students do you want to add?";
	cin >> choice;
	if (total == 0)
	{


		total = total + choice;
		for (int i = 0; i < choice; i++)
		{
			cout << "\nEnter information of student: " << i + 1 << endl << endl;
			cout << "Enter Name: ";
			cin >> arr1[i];
			cout << "enter rollno: ";
			cin >> arr2[i];
			cout << "Enter course: ";
			cin >> arr3[i];
			cout << "enter class: ";
			cin >> arr4[i];
			cout << "enter contact: ";
			cin >> arr5[i];

		}
	}
	else
	{
		for (int i = total; i < total + choice; i++)
		{
			cout << "\nEnter information of student: " << i + 1 << endl << endl;
			cout << "Enter Name: ";
			cin >> arr1[i];
			cout << "enter search_number: ";
			cin >> arr2[i];
			cout << "Enter course: ";
			cin >> arr3[i];
			cout << "enter class: ";
			cin >> arr4[i];
			cout << "enter contact: ";
			cin >> arr5[i];

		}
		total = total + choice;
	}
}

void registered_students() {
	for (int i = 0; i < total; i++)
	{
		cout << "Data of student: " << i + 1 << endl << endl;
		cout << "Name: "<<arr1[i]<<endl;
		cout << "search_number: " << arr2[i]<<endl;
		cout << "course: " << arr3[i]<<endl;
		cout << "class: " << arr4[i]<<endl;
		cout<< "contact: " << arr5[i]<<endl<<endl;

	}
}

void PrintMenu()
{
	cout << "|~~~~Huvud Meny~~~~|" << endl << endl;
	cout << "1. add student" << endl;
	cout << "2. add school class" << endl;
	cout << "3. registerd students" << endl;
	cout << "4. information about student" << endl;
	cout << "5. exit program" << endl;
	cout << "";
}

void SchoolSystem::Run()
{

	while (true)
	{
		PrintMenu();
		int val;
		cin >> val;

		switch (val)
		{
		case 1:
			add_student();

			break;

		case 2:


			break;

		case 3:
			registered_students();

			break;

		case 4:


			break;

		case 5:



			break;


		}

		//if (input == 1) AddStudent();
		//if (input == 1) AddStudent();
		//if (input == 1) AddStudent();
		//if (input == 1) AddStudent();
		//if (input == 1) AddStudent();
		//if (input == 1) AddStudent();
	}
}


void SchoolSystem::AddStudent(std::string newName, int age)
{
	Student student;
	student.name = newName;
	student.age = age;
	students.push_back(student);
}

void SchoolSystem::RemoveStudent()
{
}
