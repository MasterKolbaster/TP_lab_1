#pragma once
#include "boat.h"

enum mili
{
	miliary,
	peacefull,
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
	~Sailboat();
};
