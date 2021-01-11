#include "BioSequence.h"
#include <string>
#include <iostream>

BioSequence::BioSequence()
{
	/*setName();
	setStringContent();
	setLength();*/
}

void BioSequence::setName()
{
	getline(std::cin, this->name);
}

std::string BioSequence::getName()
{
	return this->name;
}

void BioSequence::setLength()
{
	this->length = getStringContent().length();
}

int BioSequence::getLength()
{
	return this->length;
}

void BioSequence::setStringContent()
{
	getline(std::cin, this->stringContent);
}

std::string BioSequence::getStringContent()
{
	return this->stringContent;
}

char BioSequence::getStringContent(int position)
{
	return this->stringContent[position];
}
