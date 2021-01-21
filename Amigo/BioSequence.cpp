#include "BioSequence.h"
#include <string>
#include <iostream>

BioSequence::BioSequence()
{
	setLength(0);
	/*setName();
	setStringContent();
	setLength();*/
}

std::string BioSequence::getType()
{
	return std::string();
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

void BioSequence::setLength(int number)
{
	this->length = number;
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
