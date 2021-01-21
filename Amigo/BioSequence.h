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

	virtual std::string getType();

	virtual void setName();
	virtual std::string getName();

	virtual void setLength();
	virtual void setLength(int);
	virtual int getLength();

	virtual void setStringContent();
	virtual std::string getStringContent();
	virtual char getStringContent(int);

};

