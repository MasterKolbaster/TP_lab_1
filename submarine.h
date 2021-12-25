#pragma once
#include "boat.h"
class submarine : public boat
{
private:
	int lenght;
	int width;
	int diveTime;
	string arms;
public:
	submarine();
	submarine(ofstream &ff);
	~submarine();
	void setParameters();
	void print();
	void setFF(ifstream &ff);
};

