#include "Sailboat.h"
Sailboat::Sailboat()
{
	crew = 0;
	speed = 0;
	type = "unknown";
	name = "unknown";
	kind = "unknown";
	length = 0;
	cout << "Конструктор парусника" << endl;
}

Sailboat::~Sailboat()
{
	cout << "Деструктор парусника" << endl;
}

Sailboat::Sailboat(int c, int s, string t, string n, string k, int l)
{
	crew = c;
	speed = s;
	type = t;
	name = n;
	kind = k;
	length = l;
	cout << "Конструктор с параметрами парусника" << endl;
}

void Sailboat::setParameters()
{
	setlocale(LC_ALL, "Russian");
	cout << "Введите параметры парусника " << endl;
	cout << "Введите количество членов экипажа " << endl;
	cin >> crew;
	system("cls");
	cout << "Введите максимальную скорость в м/с " << endl;
	cin >> speed;
	system("cls");
	cout << "Введите тип парусника " << endl;
	cin >> type;
	system("cls");
	cout << "Введите название парусника " << endl;
	cin >> name;
	system("cls");
	cout << "Введите длинну парусника " << endl;
	cin >> length;
	system("cls");
	cout << "Введите милитаризованность парусника " << endl;
	cin >> kind;
	system("cls");
}

void Sailboat::print()
{
	setlocale(LC_ALL, "Russian");
	cout << "Парусник:" << endl;
	cout << "Экипаж: " << crew << "человек" << endl;
	cout << "Скорость: " << speed << "м/с" << endl;
	cout << "Тип: " << type << endl;
	cout << "Название парусника: " << name << endl;
	cout << "Длина корпуса: " << length << endl;
	cout << "Назначение: " << kind << endl;
}

void Sailboat::setFF(ifstream& ff)
{
	ff >> crew;
	ff >> speed;
	ff >> type;
	ff >> name;
	ff >> length;
	ff >> kind;
}

void Sailboat::saveFF()
{
	ofstream out("Sailboat.txt", ios_base::out | ios_base::app);
	out << crew << endl;
	out << speed << endl;
	out << type << endl;
	out << name << endl;
	out << length << endl;
	out << kind << endl;
}