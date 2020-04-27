#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
struct Student {

	Student()
	{

	}
	Student(int number, string name, int grade_math, int grade_physics, int grade_english)
	{
		this->number = number;
		this->name = name;
		this->grade_math = grade_math;
		this->grade_physics = grade_physics;
		this->grade_english = grade_english;
	}

	int number;
	string name;
	int grade_math;
	int grade_physics;
	int grade_english;


	void print()
	{
		cout << "Nomer: " << number << "\nImya: " << name << "\nMath grade: " << grade_math << "\nPhysics grade: " << grade_physics << "\nEnglish grade: " << grade_english << endl;
	}

};

int main()

{
	Student Arr[25];
	Student Ivan(1, "Ivan Mercuriev", 3, 4, 5);
	Arr[0] = Ivan;
	Student Andrey(2, "Andrey Bogdan", 4, 4, 5);
	Arr[1] = Andrey;
	Student Natasha(3, "Natasha Yurova", 4, 3, 5);
	Arr[2] = Natasha;
	Student Valeriy(4, "Valeriy Viktorov", 5, 4, 4);
	Arr[3] = Valeriy;
	Student Nazar(5, "Nazar Nikitenko", 4, 5, 5);
	Arr[4] = Nazar;
	Student Nikita(6, "Nikita Nazarenko", 5, 5, 5);
	Arr[5] = Nikita;
	Student Mohammed(7, "Mohammed Mugamedov", 3, 4, 3);
	Arr[6] = Mohammed;
	Student Andrey_(8, "Andrey Milinkovic-Savic", 4, 4, 5);
	Arr[7] = Andrey_;
	Student Alexey(9, "Alexey Hodakov", 4, 4, 5);
	Arr[8] = Alexey;
	Student Vadim(10, "Vadim Malenkov", 5, 5, 5);
		Arr[9] = Vadim;
	Student Anton(11, "Anton Lapshov", 5, 5, 4);
	Arr[10] = Anton;
	Student Irina(12, "Irina Krugova", 5, 5, 5);
	Arr[11] = Irina;
	Student Ivan_(13, "Ivan Bezimenniy", 3, 3, 2);
	Arr[12] = Ivan_;
	Student Vladimir(14, "Vladimir Kozlov", 3, 3, 2);
	Arr[13] = Vladimir;
	Student Valeriya(15, "Valeriya Kalinina", 4, 5, 5);
	Arr[14] = Valeriya;
	Student Volodimira(16, "Volodimira Marchenko", 4, 3, 4);
	Arr[15] = Volodimira;
	Student Grigoriy(17, "Grigoriy Ovnyuk", 4, 4, 2);
	Arr[16] = Grigoriy;
	Student Vissarion(18, "Vissarion Djugashvili", 4, 3, 4);
	Arr[17] = Vissarion;
	Student Albina(19, "Albina Akimenko", 3, 2, 4);
	Arr[18] = Albina;
	Student Dementiy(20, "Dementiy Kucheraviy", 3, 2, 2);
	Arr[19] = Dementiy;
	Student Eduard(21, "Eduard Panchenko", 5, 5, 5);
	Arr[20] = Eduard;
	Student Ignat(22, "Ignat Yemelyanenko", 4, 4, 5);
	Arr[21] = Ignat;
	Student Mikhail(23, "Mikhail Portnov", 5, 5, 5);
	Arr[22] = Mikhail;
	Student Martin(24, "Martin Mikluha", 5, 4, 4);
	Arr[23] = Martin;
	Student Klavdiy(25, "Klavdiy Zilberberg", 3, 3, 4);
	Arr[24] = Klavdiy;



	for (int i = 0; i < 25; i++)
	{
		if ((Arr[i].grade_math < 3 && Arr[i].grade_physics < 3) || (Arr[i].grade_math < 3 && Arr[i].grade_english < 3) || (Arr[i].grade_physics < 3 && Arr[i].grade_english < 3))
		{
			Arr[i].print();
			cout << endl;
		}
	}

	getch();
	return 0;

}
