#pragma once
#include <iostream>
#include <conio.h>
#include <fstream>
#include <string>

using namespace std;

class checkword
{
private:
	string word, line;
	int offset, lenght;
	bool estado, repetido;
public:
	checkword();
	~checkword();
	void CheckW(string word);
	void isDupe(string word);
	int GetLenght();
	bool GetRep();
};

