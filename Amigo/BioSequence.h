#pragma once
#include <string>

class BioSequence
{
private:
	std::string name;
	int length;
	std::string stringContent;
public:
	BioSequence();

	virtual void setName();
	virtual std::string getName();

	virtual void setLength();
	virtual int getLength();

	virtual void setStringContent();
	virtual std::string getStringContent();
	virtual char getStringContent(int);

};

