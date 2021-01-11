#include "Amigo.h"
#include <iostream>
#include <memory> 
#include <string>

#include "ProteinSequence.h"
#include "BioSequence.h"

using namespace std;

Amigo::Amigo()
{
	mainmenue();
}

void Amigo::intro()
{
	cout << "                        _             " << endl;
	cout << "       / \\             (_)            " << endl;
	cout << "      /   \\   _ __ ___  _  __ _  ___  " << endl;
	cout << "     / /\\  \\ \| \'_ \` _ \\\| \|/ _\` \|/ _ \\ " << endl;
	cout << "    / ____  \\\| \| \| \| \| \| \| (_\| \| (_) \|" << endl;
	cout << "   /_/    \\_ \\_\| \|_\| \|_\|_\|\\__\, \|\\___\/ " << endl;
	cout << "                           __/ \|      " << endl;
	cout << "                          \|___/       " << endl;
}

void Amigo::mainmenue()
{
	int choose;
	intro();
	cout << "1) Inputmenue" << endl;
	cout << "2) About" << endl;
	cout << "choose: ";
	cin >> choose;
	switch (choose)
	{
	case 1: inputmenue();
	case 2: break;
	default:
		break;
	}
}

void Amigo::inputmenue()
{
	int choose;
	cout << "1) Enter first protein sequence" << endl;
	cout << "2) Enter secend protein sequence" << endl;
	cout << "3) Main menue" << endl;
	cout << "choose: ";
	cin >> choose;
	switch (choose)
	{
	case 1: input(1);
	case 2: input(2);
	case 3: mainmenue();
	default:
		break;
	}
	mainmenue();
}

void Amigo::input(int i)
{
	cout << "Enter name, than sequence" << endl;
	switch (i)
	{

	default:
		break;
	}
	inputmenue();
}







