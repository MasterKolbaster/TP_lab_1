#include "kater.h"

kater :: kater()
{
	setlocale(LC_ALL, "Russian");
	cout << "Конструктор катеров здесь" << endl;
	crew = 0;
	speed = 0;
	purpose = "unknown";
	material = "unknown";
	properties = "unknown";
}

kater::kater(ifstream &ff)
{
	cout << "Конструктор катеров" << endl;
	ff >> crew;
	ff >> speed;
	ff >> purpose;
	ff >> material;
	ff >> properties;
}

kater :: ~kater()
{
	cout << "Деструктор катеров" << endl;
}

void kater::setParameters()
{
	setlocale(LC_ALL, "Russian");
	cout << "Введите параметры катера " << endl;
	cout << "Введите количество членов экипажа " << endl;
	cin >> crew;
	system("cls");
	cout << "Введите максимальную скорость в м/с " << endl;
	cin >> speed;
	system("cls");
	cout << "Введите назначение катера " << endl;
	cin >> purpose;
	system("cls");
	cout << "Введите материал из которого изготовлен корпус катера " << endl;
	cin >> material;
	system("cls");
	cout << "Введите ходовые качества катера " << endl;
	cin >> properties;
	system("cls");
}

void kater::print()
{
	setlocale(LC_ALL, "Russian");
	cout << "Катер:" << endl;
	cout <<"Экипаж: "<< crew <<"человек"<< endl;
	cout << "Скорость: " << speed << "м/с" << endl;
	cout << "Назначение: " << purpose << endl;
	cout << "Материал корпуса: " << material << endl;
	cout << "Ходовые качества: " << properties << endl;
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