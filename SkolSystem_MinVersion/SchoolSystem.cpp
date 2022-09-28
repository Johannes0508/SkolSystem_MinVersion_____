#include "SchoolSystem.h"
#include <iostream>
#include <string>
#include <vector>
#include<algorithm>



//mycket utav namnen på funktionerna kommer ändras och så!!


using namespace std;

void SchoolSystem::AddStudent(std::string newName, int age) 
{
	int antal = 0;
	cout << "ange hur många elever du vill ha." << endl;
	cin >> antal;
	for (int i = 0; i < antal; i++)
	{
		cout<<""<<endl;
		//input
		Student student;
		cout << "vad ska din elev heta?" << endl;
		cin >> student.name;
		//lägger till i vektorn
		students.push_back(student);

	}
	
	
}

void SchoolSystem::School_klass() {
	int antal;
	cout << "hur många klasser vill du ha?" << endl;
	cin >> antal;
		for (int i = 0; i < antal; i++)
		{
			string schoolclass = "";
			cout << "vad ska din första klass heta?" << endl;
			cin >> schoolclass;
			schoolClasses.push_back(schoolclass);
		}
	
}

void SchoolSystem::registrerade_elever() 
{
	cout << "här är dina elever." << endl;
	for (size_t i = 0; i < students.size(); i++)
	{
		cout << "namn: " << students[i].name << endl;
	}
}

void SchoolSystem::registrerade_klasser() 
{
	cout << "här är dina klasser" << endl;
	for (int i = 0; i < schoolClasses.size(); i++)
	{
		cout << "klass: " << schoolClasses[i] << endl;
	}

}

void SchoolSystem::RemoveStudent()
{
	string input = "";

	cout << "vilken elev vill du ta bort?" << endl;
	cin >> input;

	for (size_t i = 0; i < students.size(); i++)
	{
		if (input == students[i].name)
		{
			cout << " systemet har tagit bort: " << students[i].name << endl;
			students[i].name = "";

			break;
		}
	}
}

void SchoolSystem::Removeclass()
{
	string input = "";

	cout << "vilken klass med elever vill du ta bort?" << endl;
	cin >> input;

	for (size_t i = 0; i < schoolClasses.size(); i++)
	{
		if (input == schoolClasses[i])
		{
			cout << " systemet har tagit bort: " << schoolClasses[i] << endl;
			schoolClasses[i] = "";
			break;
		}
	}
}

void SchoolSystem::AddStudent_class() {

	string namn;
	string schoolClass;

	//feedback namn
	cin >> namn;

	cin >> schoolClass;

	cout << "skriv en klass som du vill lägga in en elev i" << endl;
	cin >> schoolClass;
	for (auto& klass : schoolClasses)
	{
		if (schoolClass != klass)
		{
			return;
		}
	}

	for (auto& elev : students)
	{
		if (namn == elev)
		{

		}
	}

	/*for (auto& classes : schoolClasses)
	{
		if (classes != schoolClasses) return;
	}

	for (auto& student : students)
	{
		if (student.name == namn) student.SchoolClass = schoolClass;
	}*/

}



void PrintMenu()
{
	cout << "|~~~~Huvud Meny~~~~|" << endl << endl;
	cout << "1. add student" << endl;
	cout << "2. add school class" << endl;
	cout << "3. registerd students" << endl;
	cout << "4. registerd class" << endl;
	cout << "5. remove student" << endl;
	cout << "6. remove class" << endl;
	cout << "7. add student to class" << endl;
	cout << "8. exit program" << endl;
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
			registrerade_klasser();

			break;

		case 5:
			RemoveStudent();

			break;

		case 6:
			Removeclass();

			break;

		case 7:


			break;

		case 8:

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


