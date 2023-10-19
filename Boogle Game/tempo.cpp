#include "tempo.h"

Tempo::Tempo() {
	segundos = 0;
	Si = 4;
}

Tempo::~Tempo() {}


int Tempo::reloj() {

	for (segundos = 180; cout << segundos << endl;) {
		sleep_for(seconds(1));
		segundos--;
		system("cls");

		if (segundos == -1) {
			cout << "Su tiempo se a acabado, desea jugar otra vez" << endl;
			cout << "4 = Si, cualquier otra tecla/numero sera detectada como No" << endl;
			cin >> Si;

			if (Si == 4) {
				segundos = 180;
				(segundos == -1);
			}
			else {
				system("cls");
				cout << "Gracias por jugar" << endl;
				system("pause");
				break;
			}
		}
	}
	return 0;
}