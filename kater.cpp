#include "kater.h"

kater :: kater()
{
	setlocale(LC_ALL, "Russian");
	cout << "����������� ������� �����" << endl;
	crew = 0;
	speed = 0;
	purpose = "unknown";
	material = "unknown";
	properties = "unknown";
}

kater::kater(ifstream &ff)
{
	cout << "����������� �������" << endl;
	ff >> crew;
	ff >> speed;
	ff >> purpose;
	ff >> material;
	ff >> properties;
}

kater :: ~kater()
{
	cout << "���������� �������" << endl;
}

void kater::setParameters()
{
	setlocale(LC_ALL, "Russian");
	cout << "������� ��������� ������ " << endl;
	cout << "������� ���������� ������ ������� " << endl;
	cin >> crew;
	system("cls");
	cout << "������� ������������ �������� � �/� " << endl;
	cin >> speed;
	system("cls");
	cout << "������� ���������� ������ " << endl;
	cin >> purpose;
	system("cls");
	cout << "������� �������� �� �������� ���������� ������ ������ " << endl;
	cin >> material;
	system("cls");
	cout << "������� ������� �������� ������ " << endl;
	cin >> properties;
	system("cls");
}

void kater::print()
{
	setlocale(LC_ALL, "Russian");
	cout << "�����:" << endl;
	cout <<"������: "<< crew <<"�������"<< endl;
	cout << "��������: " << speed << "�/�" << endl;
	cout << "����������: " << purpose << endl;
	cout << "�������� �������: " << material << endl;
	cout << "������� ��������: " << properties << endl;
}

void kater::setFF(ifstream &ff)
{
	ff >> crew;
	ff >> speed;
	ff >> purpose;
	ff >> material;
	ff >> properties;
}

void kater::saveFF()
{
	ofstream out("kater.txt", ios_base::out | ios_base::app);
	out << crew << endl;
	out << speed << endl;
	out << purpose << endl;
	out << material << endl;
	out << properties << endl;
}