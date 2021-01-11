#pragma once
#include "BioSequence.h"
#include <list>
#include <algorithm>

class ProteinSequence : public BioSequence
{
private:
	std::list<char> asSequence;
public:
	ProteinSequence();

	void fillasSequence();
	void printasSequence();
};

