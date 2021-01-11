#include "Amigo.h"
#include <iostream>
#include <memory> 
#include <string>

#include "ProteinSequence.h"
#include "BioSequence.h"
#include <windows.h>

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
	ClearScreen();
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
	ClearScreen();
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
	ClearScreen();
	switch (i)
	{

	default:
		break;
	}
	inputmenue();
}

/*
* https://www.cplusplus.com/articles/4z18T05o/
*/
void Amigo::ClearScreen()
{
	HANDLE                     hStdOut;
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	DWORD                      count;
	DWORD                      cellCount;
	COORD                      homeCoords = { 0, 0 };

	hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	if (hStdOut == INVALID_HANDLE_VALUE) return;

	/* Get the number of cells in the current buffer */
	if (!GetConsoleScreenBufferInfo(hStdOut, &csbi)) return;
	cellCount = csbi.dwSize.X * csbi.dwSize.Y;

	/* Fill the entire buffer with spaces */
	if (!FillConsoleOutputCharacter(
		hStdOut,
		(TCHAR)' ',
		cellCount,
		homeCoords,
		&count
	)) return;

	/* Fill the entire buffer with the current colors and attributes */
	if (!FillConsoleOutputAttribute(
		hStdOut,
		csbi.wAttributes,
		cellCount,
		homeCoords,
		&count
	)) return;

	/* Move the cursor home */
	SetConsoleCursorPosition(hStdOut, homeCoords);
}






