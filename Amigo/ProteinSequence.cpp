#include "ProteinSequence.h"
#include "BioSequence.h"
#include <iostream>

ProteinSequence::ProteinSequence()
{
	//fillasSequence();
}

void ProteinSequence::fillasSequence()
{
	for (int i = 0; i < getStringContent().length(); i++)
	{
		asSequence.push_back(getStringContent(i));
	}
}

void ProteinSequence::printasSequence()
{
	for (std::list<char>::iterator it = asSequence.begin(); it != asSequence.end(); ++it)
	{
		std::cout << ' ' << *it;
	}
	std::cout << '\n';
}
