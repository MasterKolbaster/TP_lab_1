#include "submarine.h"
#include "boat.h"
#include "Sailboat.h"
#include "kater.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main()
{
	char flag = '0';
	int choise;
	setlocale(LC_ALL, "Russian");
	system("cls");
	while (flag == '0')
	{
		cout << "�������� ������� \n"
			"1 - ����� ���� ����� �� �����\n"
			"2 - �������� ����� ����� � ����\n"
			"3 - ����� �� ���������\n" << endl;
		cin >> choise;
		switch (choise)
		{
		case 1:
			system("cls");
			flag = '1';
			break;
		case 2:
			system("cls");
			flag = '1';
			break;
		case 3:
			system("cls");
			flag = '1';
			break;
		default:
			system("cls");
			cout << "��� ����� �������" << endl;
			break;
		}
	}
	system("cls");
}