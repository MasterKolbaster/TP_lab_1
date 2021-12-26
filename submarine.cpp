#include "submarine.h"
submarine::submarine()
{
	cout << "����������� ��������" << endl;
	crew = 0;
	speed = 0;
	length = 0;
	width = 0;
	diveTime = 0;
	arms = "unknown";
}

submarine::submarine(int c, int s, int l, int w, int dt, string a)
{
	cout << "����������� � ����������� ��������" << endl;
	crew = c;
	speed = s;
	length = l;
	width = w;
	diveTime = dt;
	arms = a;
}

submarine::~submarine()
{
	cout << "���������� ��������" << endl;
}

void submarine::setParameters()
{
	setlocale(LC_ALL, "Russian");
	cout << "������� ��������� �������� " << endl;
	cout << "������� ���������� ������ ������� " << endl;
	cin >> crew;
	system("cls");
	cout << "������� ������������ �������� � �/� " << endl;
	cin >> speed;
	system("cls");
	cout << "������� ����� �������� " << endl;
	cin >> length;
	system("cls");
	cout << "������� ������ �������� " << endl;
	cin >> width;
	system("cls");
	cout << "������� ������������ ����� ���������� " << endl;
	cin >> diveTime;
	system("cls");
	cout << "������� ���������� �������� " << endl;
	cin >> arms;
	system("cls");
}

void submarine::print()
{
	setlocale(LC_ALL, "Russian");
	cout << "��������:" << endl;
	cout << "������: " << crew << "�������" << endl;
	cout << "��������: " << speed << "�/�" << endl;
	cout << "�����: " << length << endl;
	cout << "������: " << width << endl;
	cout << "������������ ����� ����������: " << diveTime << endl;
	cout << "����������: " << arms << endl;
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