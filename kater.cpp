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
	cout << "Введите параметры катера " << endl;
	cout << "Введите количество членов экипажа " << endl;
	cin >> crew;
	cout << "Введите максимальную скорость в м/с " << endl;
	cin >> speed;
	cout << "Введите назначение катера " << endl;
	cin >> purpose;
	cout << "Введите материал из которого изготовлен корпус катера " << endl;
	cin >> material;
	cout << "Введите ходовые качества катера " << endl;
	cin >> properties;
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