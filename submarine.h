#pragma once
#include "boat.h"
#include <iostream>
#include <fstream>
class submarine : public boat
{
private:
	int length;
	int width;
	int diveTime;
	string arms;
public:
	submarine();
	submarine(int c, int s, int l, int w, int dt, string a);
	~submarine();
	void setParameters();
	void print();
	void setFF(ifstream &ff);
	void saveFF();
};

