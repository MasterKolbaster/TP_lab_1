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
	ff >> crew;
	ff >> speed;
	ff >> purpose;
	ff >> material;
	ff >> properties;
}

kater :: ~kater()
{
	ofstream out;
	out.open("kater.txt");
	out << crew << endl;
	out << speed << endl;
	out << purpose << endl;
	out << material << endl;
	out << properties << endl;
}

void kater::setParameters()
{
	setlocale(LC_ALL, "Russian");
	cout << "������� ��������� ������ " << endl;
	cout << "������� ���������� ������ ������� " << endl;
	cin >> crew;
	cout << "������� ������������ �������� � �/� " << endl;
	cin >> speed;
	cout << "������� ���������� ������ " << endl;
	cin >> purpose;
	cout << "������� �������� �� �������� ���������� ������ ������ " << endl;
	cin >> material;
	cout << "������� ������� �������� ������ " << endl;
	cin >> properties;
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