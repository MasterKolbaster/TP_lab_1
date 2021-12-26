#include "submarine.h"
submarine::submarine()
{
	cout << "Конструктор подлодки" << endl;
	crew = 0;
	speed = 0;
	length = 0;
	width = 0;
	diveTime = 0;
	arms = "unknown";
}

submarine::submarine(int c, int s, int l, int w, int dt, string a)
{
	cout << "Конструктор с параметрами подлодки" << endl;
	crew = c;
	speed = s;
	length = l;
	width = w;
	diveTime = dt;
	arms = a;
}

submarine::~submarine()
{
	cout << "Деструктор подлодки" << endl;
}

void submarine::setParameters()
{
	setlocale(LC_ALL, "Russian");
	cout << "Введите параметры подлодки " << endl;
	cout << "Введите количество членов экипажа " << endl;
	cin >> crew;
	system("cls");
	cout << "Введите максимальную скорость в м/с " << endl;
	cin >> speed;
	system("cls");
	cout << "Введите длину подлодки " << endl;
	cin >> length;
	system("cls");
	cout << "Введите ширину подлодки " << endl;
	cin >> width;
	system("cls");
	cout << "Введите максимальное время погружения " << endl;
	cin >> diveTime;
	system("cls");
	cout << "Введите вооружение подлодки " << endl;
	cin >> arms;
	system("cls");
}

void submarine::print()
{
	setlocale(LC_ALL, "Russian");
	cout << "Подлодка:" << endl;
	cout << "Экипаж: " << crew << "человек" << endl;
	cout << "Скорость: " << speed << "м/с" << endl;
	cout << "Длина: " << length << endl;
	cout << "Ширина: " << width << endl;
	cout << "Максимальное время погружения: " << diveTime << endl;
	cout << "Вооружение: " << arms << endl;
}

void submarine::setFF(ifstream& ff)
{
	ff >> crew;
	ff >> speed;
	ff >> length;
	ff >> width;
	ff >> diveTime;
	ff >> arms;
}

void submarine :: saveFF()
{
	ofstream out("submarine.txt", ios_base::out | ios_base::app);
	out << crew << endl;
	out << speed << endl;
	out << length << endl;
	out << width << endl;
	out << diveTime << endl;
	out << arms << endl;
}