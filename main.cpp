#include "submarine.h"
#include "boat.h"
#include "Sailboat.h"
#include "kater.h"
//#include <iostream>
//#include <string>
//#include <fstream>
//#include<cstdlib>
//using namespace std;

//-------------------------------------��������� ������-----------------------------//
struct katerList
{
	int num = 0;
	kater node;
	katerList* next;
	katerList* prev;
};
struct SailList
{
	int num = 0;
	Sailboat node;
	SailList* next;
	SailList* prev;
};
struct subList
{
	int num = 0;
	submarine node;
	subList* next;
	subList* prev;
};
//--------------------------------------������� ��� ������--------------------------//
void fileScan(katerList* k, SailList* s, subList* sub);

//------------------------------------������� ��� ������-----------------------------//
template <typename T, typename C>
T* listadd(T* head, C newN)
{
	T* newNode = new T;
	newNode->node = newN;
	
	T* now = head;
	if (head == NULL)
	{
		head = newNode;
		head->next = NULL;
		head->num = 1;
		return head;
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
		newNode->num = ++now->num;
		//newNode->node.print();
	}
}
template <typename T>
void listdel(T* head, int del)
{
	if (head != NULL)
	{
		T* now = head;
		while (now != NULL)
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
		cout << "��� ����� �����" << endl;
	}
	else
	{
		cout << "������ ����� ����" << endl;
	}
}
template <typename T>
void listprint(T* head)
{
	if (head != NULL)
	{
		T* now = head;
		while (now!= NULL)
		{
			head->node.print();
			now = now->next;
		}
	}
	else
	{
		cout << "������ ����" << endl;
	}
}

template <typename T>
void listsave(T* head) 
{
	if (head != NULL)
	{
		T* now = head;
		while (now != NULL)
		{
			now->node.saveFF();
			now = now->next;
			//delete now->prev;
			
		}
	}
}
//------------------------------------------------------------------------------------//

int main()
{
	char flag = '0';
	char flagL = '0';
	int choise, delel;
	setlocale(LC_ALL, "Russian");
	system("cls");
	//katerList kat;
	//kater k;
	katerList* Kater = NULL;
	//SailList sal;
	SailList* Sail = NULL;
	//subList SUB;
	subList* sub = NULL;
	fileScan(Kater, Sail, sub);
	while (flag == '0')
	{
		cout << "�������� ������� \n"
			"1 - ����� ���� ����� �� �����\n"
			"2 - �������� ����� ����� � ����\n"
			"3 - ������� ����� �� ����\n"
			"4 - ����� �� ���������\n" << endl;
		cin >> choise;
		switch (choise)
		{
		case 1:
			system("cls");
			listprint(Kater);
			listprint(Sail);
			listprint(sub);
			break;
		case 2:
			system("cls");
				cout << "�������� ��� ����������� ����� \n"
					"1 - �����\n"
					"2 - ��������\n"
					"3 - ��������" << endl;
				cin >> choise;
				switch (choise)
				{
				case 1:
				{
					system("cls");
					kater k;
					k.setParameters();
					Kater = listadd(Kater, k);
					//Kater->next->node.print();
					flagL = '1';
					break;
				}
				case 2:
				{
					system("cls");
					Sailboat s;
					s.setParameters();
					Sail = listadd(Sail, s);
					flagL = '1';
					break;
				}
				case 3:
				{
					system("cls");
					submarine s;
					s.setParameters();
					sub = listadd(sub, s);
					flagL = '1';
					break;
				}
				default:
					system("cls");
					cout << "����������� ������� �������" << endl;
					flagL = '1';
					break;
				}
			break;
		case 3:
			system("cls");
			cout << "�������� ��� ��������� ����� \n"
				"1 - �����\n"
				"2 - ��������\n"
				"3 - ��������" << endl;
			cin >> choise;
			cout << "�������� ����� ��������� ����� \n";
			cin >> delel;
			switch (choise)
			{
			case 1:
			{
				system("cls");
				listdel(Kater, delel);
				flagL = '1';
				break;
			}
			case 2:
			{
				system("cls");
				listdel(Sail, delel);
				flagL = '1';
				break;
			}
			case 3:
			{
				system("cls");
				listdel(sub, delel);
				flagL = '1';
				break;
			}
			default:
				system("cls");
				cout << "����������� ������� �������" << endl;
				flagL = '1';
				break;
			}
			break;
		case 4:
			system("cls");
			listsave(Kater);
			listsave(Sail);
			listsave(sub);
			flag = '1';
			break;
		default:
			system("cls");
			cout << "��� ����� �������" << endl;
			break;
		}
	}
	//system("cls");
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
			throw exception("������ �������� ����� kater.txt");
	}
	catch (const exception & exp)
	{
		cout << "����������: " << exp.what() << endl;
	}
	while (!ff.eof())
	{
		newKat.setFF(ff);
		listadd(k, newKat);
	}
	ff.close();

	ff.open("Sailboat.txt");
	try
	{
		if (!ff)
			throw exception("������ �������� ����� kater.txt");
	}
	catch (const exception & exp)
	{
		cout << "����������: " << exp.what() << endl;
	}
	
	while (!ff.eof())
	{
		newSail.setFF(ff);
		s = listadd(s, newSail);
		s->node.print();
		cout << "kek" << endl;
	}
	ff.close();

	ff.open("submarine.txt");
	try
	{
		if (!ff)
			throw exception("������ �������� ����� kater.txt");
	}
	catch (const exception & exp)
	{
		cout << "����������: " << exp.what() << endl;
	}
	while (!ff.eof())
	{
		newSub.setFF(ff);
		listadd(sub, newSub);
	}
	ff.close();
}

