#include "Sailboat.h"
Sailboat::Sailboat()
{
	crew = 0;
	speed = 0;
	type = "unknown";
	name = "unknown";
	kind = unknown;
	length = 0;
	cout << "����������� ���������" << endl;
}

Sailboat::~Sailboat()
{
	cout << "���������� ���������" << endl;
}

Sailboat::Sailboat(int c, int s, string t, string n, mili k, int l)
{
	crew = c;
	speed = s;
	type = t;
	name = n;
	kind = k;
	length = l;
	cout << "����������� � ����������� ���������" << endl;
}

void Sailboat::setParameters()
{
	char flag = '0';
	int choise;
	setlocale(LC_ALL, "Russian");
	cout << "������� ��������� ��������� " << endl;
	cout << "������� ���������� ������ ������� " << endl;
	cin >> crew;
	system("cls");
	cout << "������� ������������ �������� � �/� " << endl;
	cin >> speed;
	system("cls");
	cout << "������� ��� ��������� " << endl;
	cin >> type;
	system("cls");
	cout << "������� �������� ��������� " << endl;
	cin >> name;
	system("cls");
	cout << "������� ������ ��������� " << endl;
	cin >> length;
	system("cls");
	while (flag == '0')
	{
		cout << "�������� ��� ��������� \n"
			"1 - �������\n"
			"2 - ������" << endl;
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
			cout << "����������� ������� �������" << endl;
			break;
		}
	}
}

void Sailboat::print()
{
	setlocale(LC_ALL, "Russian");
	cout << "��������:" << endl;
	cout << "������: " << crew << "�������" << endl;
	cout << "��������: " << speed << "�/�" << endl;
	cout << "���: " << type << endl;
	cout << "�������� ���������: " << name << endl;
	cout << "����� �������: " << length << endl;
	cout << "����������: " << kind << endl;
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