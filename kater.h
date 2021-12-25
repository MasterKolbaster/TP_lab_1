#pragma once
#include "boat.h"
#include <iostream>
#include <fstream>
using namespace std;
class kater : public boat
{
private:
	string purpose;
	string material;
	string properties;
public:
	kater();
	kater(ifstream ff);
	~kater();
	void setParameters();
	void print();
};

