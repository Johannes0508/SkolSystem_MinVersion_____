#include "SchoolSystem.h"
#include <iostream>
#include <string>
#include <vector>
#include<algorithm>



//mycket utav namnen p� funktionerna kommer �ndras och s�!!


using namespace std;

void SchoolSystem::AddStudent(std::string newName, int age) 
{
	int antal = 0;
	cout << "ange hur m�nga elever du vill ha." << endl;
	cin >> antal; //tar input p� antal
	for (int i = 0; i < antal; i++) //en for loop f�r att registrera alla elever man har valt p� sin input
	{
		cout<<""<<endl;
		Student student; //tar fram student variabler
		cout << "vad ska din elev heta?" << endl;
		cin >> student.name;  //tar input p� student.name
		students.push_back(student); //l�gger till i vektorn

	}	
}

void SchoolSystem::School_klass() {
	int antal; 
	cout << "hur m�nga klasser vill du ha?" << endl;
	cin >> antal; //tar input p� antal
		for (int i = 0; i < antal; i++) //en for loop f�r att registrera alla klasser man har valt p� input
		{
			string schoolclass = ""; //string variebel som heter schoolclass
			cout << "vad ska din f�rsta klass heta?" << endl;
			cin >> schoolclass; //tar input p� schoolclass
			schoolClasses.push_back(schoolclass); //l�gger till i vector
		}
	
}

void SchoolSystem::registrerade_elever() 
{
	cout << "h�r �r dina elever." << endl;
	for (size_t i = 0; i < students.size(); i++) //for loop som printar ut s� m�nga elevers namn som man har registrerat
	{
		cout << "namn: " << students[i].name << endl; //visar elevens namn
	}
}

void SchoolSystem::registrerade_klasser() 
{
	cout << "h�r �r dina klasser" << endl;
	for (int i = 0; i < schoolClasses.size(); i++) //for loop som printar ut alla klasser som �r registrerade och namnen som tillh�r varje klass
	{
		cout << "klass: " << schoolClasses[i] << endl; //printar ut namn p� skol klassen
		cout << "Name: " << students[i].name << endl; //printar ut namn p� eleven som �r kopplad till klassen

	}

}

void SchoolSystem::RemoveStudent()
{
	string input = ""; //string variabel som heter input

	cout << "vilken elev vill du ta bort?" << endl;
	cin >> input; // tar input p� variebeln input

	for (size_t i = 0; i < students.size(); i++) //en for loop som kollar storleken p� antal namn och tar den f�rsta personen som man har skrivet p� input och tar den vidare till for loopen
	{
		if (input == students[i].name) //if statement som kollar om input st�mmer med namn som man har registrerat och tagit bort namnet
		{
			cout << " systemet har tagit bort: " << students[i].name << endl; //visar vilken elev som �r borta
			students[i].name = ""; //g�r elevens namn blankt

			break;
		}
	}
}

void SchoolSystem::Removeclass()
{
	string input = ""; //string variabel som heter input

	cout << "vilken klass med elever vill du ta bort?" << endl;
	cin >> input; // tar input p� variebeln input

	for (size_t i = 0; i < schoolClasses.size(); i++) //en for loop som kollar storleken p� registrerade skol klasser
	{
		if (input == schoolClasses[i]) //if statement som kollar om input st�mmer �verens med registrerade klasser
		{
			cout << " systemet har tagit bort: " << schoolClasses[i] << endl; //visar villken klass som har tagits bort
			schoolClasses[i] = ""; //g�r klassens namn blankt
			break;
		}
	}
}

void SchoolSystem::AddStudent_class() {

	string StudentName; //string variabel f�r elevens namn
	string schoolClass;	//string variabel f�r klassens namn

	//feedback namn
	cout << "vilken elev vill du l�gga in i en klass?" << endl;
	cin >> StudentName; //tar input p� StudentName
	cout << "vilken klass vill du l�gga in din elev i?" << endl;
	cin >> schoolClass; //tar input p� schoolClass
	for(auto& classes : schoolClasses) //for loop som g�r att classes representerar allt som finns i schoolClasses vectorn
	{

		if (classes != schoolClass) //if loop som visar vad som h�nder om klassen som man skrev inte finns i en vector
		{
			cout << "Denna elev eller klass finns inte!"<<endl;
			return;
		}
	}
	for (auto& student : students) //for loop som g�r att student representerar allt som finns i students vectorn
	{
		if (student.name == StudentName) student.klass = schoolClass; //om namnet som �r registrerat och input h�nger ihop s� ska studentens klass �ndras till klassens input som man skrev in tidigare
		std::cout << "Klassen och eleven finns nu i klassen"<<endl; //meddelar om att elevens finns i klassen
	}
}

void PrintMenu()//simpel meny f�r att navigera runt i systemet
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
	while (true) //en praktisk while loop som g�r att man f�r ett alternativ att v�lja vad man ska g�ra
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