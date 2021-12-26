#pragma once
#include "boat.h"
#include <iostream>
#include <fstream>

class Sailboat : public boat
{
private:
	string type;
	string name;
	string kind;
	int length;
	
public:
	Sailboat();
	Sailboat(int c, int s, string t, string n, string k, int l);
	~Sailboat();
	void setParameters();
	void print();
	void setFF(ifstream &ff);
	void saveFF();
};

