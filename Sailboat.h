#pragma once
#include "boat.h"
#include <iostream>
#include <fstream>
enum mili
{
	miliary,
	peacefull,
	unknown,
};
class Sailboat : public boat
{
private:
	string type;
	string name;
	mili kind;
	int length;
	
public:
	Sailboat();
	Sailboat(int c, int s, string t, string n, mili k, int l);
	~Sailboat();
	void setParameters();
	void print();
	void setFF(ifstream &ff);
};

