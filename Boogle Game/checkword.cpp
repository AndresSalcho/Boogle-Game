#include "checkword.h"

checkword::checkword() {}
checkword::~checkword() {}


void checkword::CheckW(string word) {
    bool encontrado;

    encontrado = false;

    ifstream input("output.txt");
    if (!input) {
        cout << "No se pudo leer el archivo output" << endl;
    }

    ofstream output("discard.txt", fstream::app);
    if (!output) {
        cout << "No se pudo crear" << endl;
    }

    while (!input.eof())
    {
        getline(input, line);
        if ((offset = line.find(word, 0)) != string::npos)
        {
            encontrado = true;
            input.close();

            if (word.length() == 3) {
                lenght = 1;
            }
            if (word.length() == 4) {
                lenght = 1;
            }
            if (word.length() == 5) {
                lenght = 2;
            }
            if (word.length() == 6) {
                lenght = 3;
            }
            if (word.length() == 7) {
                lenght = 5;
            }
            if (word.length() >= 8) {
                lenght = 11;
            }

            output << word << endl;

        }
        if (input.eof() && encontrado == false) {

            lenght = 0;

        }
    }

    output.close();
}

void checkword::isDupe(string word) {
    bool encontrado;
    encontrado = false;

    ofstream output("discard.txt", fstream::app);
    if (!output) {
        cout << "No se pudo crear" << endl;
    }

    output.close();

    ifstream input("discard.txt");
    if (!input) {
        cout << "No se pudo leer el archivo discard" << endl;
    }

    while (!input.eof())
    {
        getline(input, line);
        if ((offset = line.find(word, 0)) != string::npos)
        {
            encontrado = true;
            input.close();
            repetido = true;

        }
        if (input.eof() && encontrado == false) {

            repetido = false;

        }
    }
}

int checkword::GetLenght() { return lenght; }
bool checkword::GetRep() { return repetido; }
