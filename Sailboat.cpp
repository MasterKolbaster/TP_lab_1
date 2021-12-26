#include "Sailboat.h"
Sailboat::Sailboat()
{
	crew = 0;
	speed = 0;
	type = "unknown";
	name = "unknown";
	kind = "unknown";
	length = 0;
	cout << "����������� ���������" << endl;
}

Sailboat::~Sailboat()
{
	cout << "���������� ���������" << endl;
}

Sailboat::Sailboat(int c, int s, string t, string n, string k, int l)
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
	cout << "������� ������������������ ��������� " << endl;
	cin >> kind;
	system("cls");
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