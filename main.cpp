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
		cout << "Выберите команду \n"
			"1 - Вывод всех лодок на экран\n"
			"2 - Добавить новую лодку в базу\n"
			"3 - Выход из программы\n" << endl;
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
			cout << "Нет такой команды" << endl;
			break;
		}
	}
	system("cls");
}