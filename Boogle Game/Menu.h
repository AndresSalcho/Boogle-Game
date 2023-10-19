#pragma once
#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <stdio.h> 


using namespace std;

class Menu
{
private:
	int option, option2, points, lang, tries;
	bool endgame, isRight, stgame, repFlag, shortFlag;
	string respuesta, name;
public:
	Menu();
	~Menu();
	void Menu1();
};


