#pragma once
class boat
{
protected:
	int speed;
	int crew;
public:
	virtual void print() = 0;
	virtual void setParameters() = 0;
};

