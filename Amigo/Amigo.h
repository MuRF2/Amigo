#pragma once

#include "ProteinSequence.h"
#include "BioSequence.h"

class Amigo
{
private:
	ProteinSequence protein;
	
public:
	Amigo();

	void intro();
	void mainmenue();
	void inputmenue();
	void input(int);
	void proteinmenue();

	void initalProtein(ProteinSequence);

	void printProtein(ProteinSequence);

	void ClearScreen();


};
