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
	cin >> antal; //tar input på antal
	for (int i = 0; i < antal; i++) //en for loop för att registrera alla elever man har valt på sin input
	{
		cout<<""<<endl;
		Student student; //tar fram student variabler
		cout << "vad ska din elev heta?" << endl;
		cin >> student.name;  //tar input på student.name
		students.push_back(student); //lägger till i vektorn

	}	
}

void SchoolSystem::School_klass() {
	int antal; 
	cout << "hur många klasser vill du ha?" << endl;
	cin >> antal; //tar input på antal
		for (int i = 0; i < antal; i++) //en for loop för att registrera alla klasser man har valt på input
		{
			string schoolclass = ""; //string variebel som heter schoolclass
			cout << "vad ska din första klass heta?" << endl;
			cin >> schoolclass; //tar input på schoolclass
			schoolClasses.push_back(schoolclass); //lägger till i vector
		}
	
}

void SchoolSystem::registrerade_elever() 
{
	cout << "här är dina elever." << endl;
	for (size_t i = 0; i < students.size(); i++) //for loop som printar ut så många elevers namn som man har registrerat
	{
		cout << "namn: " << students[i].name << endl; //visar elevens namn
	}
}

void SchoolSystem::registrerade_klasser() 
{
	cout << "här är dina klasser" << endl;
	for (int i = 0; i < schoolClasses.size(); i++) //for loop som printar ut alla klasser som är registrerade och namnen som tillhör varje klass
	{
		cout << "klass: " << schoolClasses[i] << endl; //printar ut namn på skol klassen
		cout << "Name: " << students[i].name << endl; //printar ut namn på eleven som är kopplad till klassen

	}

}

void SchoolSystem::RemoveStudent()
{
	string input = ""; //string variabel som heter input

	cout << "vilken elev vill du ta bort?" << endl;
	cin >> input; // tar input på variebeln input

	for (size_t i = 0; i < students.size(); i++) //en for loop som kollar storleken på antal namn och tar den första personen som man har skrivet på input och tar den vidare till for loopen
	{
		if (input == students[i].name) //if statement som kollar om input stämmer med namn som man har registrerat och tagit bort namnet
		{
			cout << " systemet har tagit bort: " << students[i].name << endl; //visar vilken elev som är borta
			students[i].name = ""; //gör elevens namn blankt

			break;
		}
	}
}

void SchoolSystem::Removeclass()
{
	string input = ""; //string variabel som heter input

	cout << "vilken klass med elever vill du ta bort?" << endl;
	cin >> input; // tar input på variebeln input

	for (size_t i = 0; i < schoolClasses.size(); i++) //en for loop som kollar storleken på registrerade skol klasser
	{
		if (input == schoolClasses[i]) //if statement som kollar om input stämmer överens med registrerade klasser
		{
			cout << " systemet har tagit bort: " << schoolClasses[i] << endl; //visar villken klass som har tagits bort
			schoolClasses[i] = ""; //gör klassens namn blankt
			break;
		}
	}
}

void SchoolSystem::AddStudent_class() {

	string StudentName; //string variabel för elevens namn
	string schoolClass;	//string variabel för klassens namn

	//feedback namn
	cout << "vilken elev vill du lägga in i en klass?" << endl;
	cin >> StudentName; //tar input på StudentName
	cout << "vilken klass vill du lägga in din elev i?" << endl;
	cin >> schoolClass; //tar input på schoolClass
	for(auto& classes : schoolClasses) //for loop som gör att classes representerar allt som finns i schoolClasses vectorn
	{

		if (classes != schoolClass) //if loop som visar vad som händer om klassen som man skrev inte finns i en vector
		{
			cout << "Denna elev eller klass finns inte!"<<endl;
			return;
		}
	}
	for (auto& student : students) //for loop som gör att student representerar allt som finns i students vectorn
	{
		if (student.name == StudentName) student.klass = schoolClass; //om namnet som är registrerat och input hänger ihop så ska studentens klass ändras till klassens input som man skrev in tidigare
		std::cout << "Klassen och eleven finns nu i klassen"<<endl; //meddelar om att elevens finns i klassen
	}
}

void PrintMenu()//simpel meny för att navigera runt i systemet
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
	while (true) //en praktisk while loop som gör att man får ett alternativ att välja vad man ska göra
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
			AddStudent_class();

			break;

		case 8:
			exit(0);

			break;
		}
	}
}