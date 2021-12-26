#include "Sailboat.h"
Sailboat::Sailboat()
{
	crew = 0;
	speed = 0;
	type = "unknown";
	name = "unknown";
	kind = unknown;
	length = 0;
	cout << "Конструктор парусника" << endl;
}

Sailboat::~Sailboat()
{
	cout << "Деструктор парусника" << endl;
}

Sailboat::Sailboat(int c, int s, string t, string n, mili k, int l)
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
	char flag = '0';
	int choise;
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
	while (flag == '0')
	{
		cout << "Выберите тип парусника \n"
			"1 - Военный\n"
			"2 - Мирный" << endl;
		cin >> choise;
		switch (choise)
		{
		case 1:
			system("cls");
			kind = miliary;
			flag = '1';
			break;
		case 2:
			system("cls");
			kind = peacefull;
			flag = '1';
			break;
		default:
			system("cls");
			cout << "Неправильно выбрана команда" << endl;
			break;
		}
	}
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