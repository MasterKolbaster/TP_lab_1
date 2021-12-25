#include "submarine.h"
#include "boat.h"
#include "Sailboat.h"
#include "kater.h"
#include <iostream>
#include <string>
#include <fstream>
#include<cstdlib>
using namespace std;

struct katerList
{
	int num = 0;
	kater node;
	kater* next;
	kater* prev;
};
struct SailList
{
	int num = 0;
	Sailboat node;
	Sailboat* next;
	Sailboat* prev;
};
struct subList
{
	int num = 0;
	submarine node;
	submarine* next;
	submarine* prev;
};
void fileScan(katerList* k, SailList* s, subList* sub);
int main()
{
	char flag = '0';
	int choise;
	setlocale(LC_ALL, "Russian");
	system("cls");
	katerList* Kater;
	SailList* Sail;
	subList* sub;
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
void fileScan(katerList* k, SailList* s, subList* sub)
{
	int i = 0;
	ifstream ff("kater.txt");
	kater newKat;
	Sailboat newSail;
	submarine newSub;
	try
	{
		if (!ff)
			throw exception("Ошибка открытия файла kater.txt");
	}
	catch (const exception & exp)
	{
		cout << "Исключение: " << exp.what() << endl;
	}
	while (ff.eof())
	{
		newKat.setFF(ff);
		listadd(k, newKat);
	}
	ff.close();

	ff.open("Sailboat.txt");
	try
	{
		if (!ff)
			throw exception("Ошибка открытия файла kater.txt");
	}
	catch (const exception & exp)
	{
		cout << "Исключение: " << exp.what() << endl;
	}
	while (ff.eof())
	{
		newSail.setFF(ff);
		listadd(s, newSail);
	}
	ff.close();

	ff.open("submarine.txt");
	try
	{
		if (!ff)
			throw exception("Ошибка открытия файла kater.txt");
	}
	catch (const exception & exp)
	{
		cout << "Исключение: " << exp.what() << endl;
	}
	while (ff.eof())
	{
		newSub.setFF(ff);
		listadd(sub, newSub);
	}
	ff.close();
}

template <typename T, typename C>
void listadd(T* head, C newN)
{
	T* newNode = new T;
	newNode->node = newN;
	T* now = head;
	now = head;
	if (head == NULL)
	{
		head = newN;
		now->next = NULL;
		now->num = 1;
	}
	else
	{
		while (now->next != NULL)
		{
			now = now->next;
		}
		now->next = newNode;
		newNode->prev = now;
		newNode->next = NULL;
		newNode->num = ++now->num
	}
}
template <typename T>
void listdel(T* head, int del)
{
	if (head != NULL)
	{
		T* now = head;
		while (now->next != NULL)
		{
			if (now->num == del)
			{
				if (now == head)
				{
					if (head->next == NULL)
					{
						head = NULL;
						delete now;
						return;
					}
					else
					{
						head->next->prev = NULL;
						head = head->next;
						delete now;
						return;
					}
				}
				else
				{
					if (now->next == NULL)
					{
						now->prev->next = NULL;
						delete now;
						return;
					}
					else
					{
						now->prev->next = now->next;
						now->next->prev = now->prev;
						delete now;
						return;
					}
				}
			}
			now = now->next;
		}
		setlocale(LC_ALL, "Russian");
		cout << "Нет такой лодки" << endl;
	}
	else
	{
		cout << "Список лодок пуст" << endl;
	}
}