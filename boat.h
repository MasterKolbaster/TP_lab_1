#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include<cstdlib>
using namespace std;
class boat
{
protected:
	int speed;
	int crew;
public:
	virtual void print() = 0;
	virtual void setParameters() = 0;
};

