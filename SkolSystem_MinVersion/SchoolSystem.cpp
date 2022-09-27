#include "SchoolSystem.h"
#include <iostream>
#include <string>
#include <vector>


//mycket utav namnen på funktionerna kommer ändras och så!!


using namespace std;

void SchoolSystem::AddStudent(std::string newName, int age) 
{
	int antal = 0;
	cout << "ange hur många elever du vill ha." << endl;
	cin >> antal;
	for (int i = 0; i < antal; i++)
	{
		//2 strings
		string input; //2 st
		cout<<""<<endl;
		//input
		Student student;
		cout << "vad ska din elev heta?" << endl;
		cin >> student.name;
		student.name = input;
		//lägger till i vektorn
		students.push_back(student);
	}

	
}

void SchoolSystem::School_klass() {
	std::string schoolclass = "";
	schoolClasses.push_back(schoolclass);
}

void SchoolSystem::registrerade_elever() {
	cout << "här är dina elever." << endl;
	for (int i = 0; i < students.size(); i++)
	{
		cout<<"namn: "<< students[i].name <<endl;
	}
}

void SchoolSystem::RemoveStudent()
{
}

void PrintMenu()
{
	cout << "|~~~~Huvud Meny~~~~|" << endl << endl;
	cout << "1. add student" << endl;
	cout << "2. add school class" << endl;
	cout << "3. registerd students" << endl;
	cout << "4. search for student" << endl;
	cout << "5. search for class" << endl;
	cout << "6. add student to class" << endl;
	cout << "7. exit program" << endl;
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
			AddStudent(newName, age);

			break;

		case 2:
			School_klass();

			break;

		case 3:
			registrerade_elever();

			break;

		case 4:
			

			break;

		case 5:


			break;

		case 6:

			break;

		case 7:

			exit(0);

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


