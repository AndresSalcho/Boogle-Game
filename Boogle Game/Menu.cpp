#include "Menu.h"
#include "header.h"
#include "tempo.h"
#include "random.h"
#include "checkword.h"

Menu::Menu() {
	option = 0;
	option2 = 0;
	points = 0;
	lang = 0;
	tries = 0;
	endgame = false;
	stgame = false;
	isRight = true;
	repFlag = false;
	shortFlag = false;
	respuesta = "";
	name = "";
}

Menu::~Menu() {}



void Menu::Menu1() {

	while (option > 2 or option < 1) {
		system("cls");
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hConsole, 3);
		printf("\n\n\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 201, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 187);
		printf("\n\t%c @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ %c", 186, 186);
		printf("\n\t%c @@@@@@#BBB###&&&&&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&#G@@@@@@@@@@@@@@@@@@@@@@@ %c", 186, 186);
		printf("\n\t%c @@@@@@@&^     :.   ..!&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@#J^.   .@@@@@@@@@@@@@@@@@@@@@@@ %c", 186, 186);
		printf("\n\t%c @@@@@@@@B    :@@7     P@@@@@@&##&&@@@@@@@@&&&&@@&&&&@@@@@@&&&@@&&&&@@@?     ?@@@@@&##&&@@@@@@@@@@@@@ %c", 186, 186);
		printf("\n\t%c @@@@@@@@@.    :.    ~B@@@@#!..^:  .~B@@@Y.   ..!^  Y@@@P:   ..~~  ?@@@5     B@@&!.:!.   :J@@@@@@@@@@ %c", 186, 186);
		printf("\n\t%c @@@@@@@@@7    .:     .~#@J  P@@Y     Y@^    :@B:   ^@@7    .@#^   .@@@P     @@5  P@@~     :@@@@@@@@@ %c", 186, 186);
		printf("\n\t%c @@@@@@@@@#   5@@^       &   .:.       B      J#P    #@      7BG.   P@@P    ~@&    .       P@@@@@@@@@ %c", 186, 186);
		printf("\n\t%c @@@@@@@@@@:  J!        7@:           !@.            ?@:            ^@@G    5@@.     .^~?PBY5@@@@@@@@ %c", 186, 186);
		printf("\n\t%c @@@@@@@@&#:       .:~Y#@@@7        .Y@@&~      7&:  ~@@!      ~&!  :@@5    B@@&!      ....:!@@@@@@@@ %c", 186, 186);
		printf("\n\t%c @@@@@@@BP5PGB#&&&@@@@@@@@@@@B5JJYP&@@@@@@GPB#&@@@.  P@@@B5B#&@@@:  J@BYY55PB&@@@@#P5YY5G#@@&@@@@@@@@ %c", 186, 186);
		printf("\n\t%c @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@5  ^?5Y!   Y@@@B  :?557   ?@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ %c", 186, 186);
		printf("\n\t%c @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&GBY!^^:^7P@@@@@GB57~^:^7P&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ %c", 186, 186);
		printf("\n\t%c @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ %c", 186, 186);
		printf("\n\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 200, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 188);
		printf("\n\n\n");
		SetConsoleTextAttribute(hConsole, 14);
		printf("\n\t\t\t\t\t\tComenzar juego.............1");
		printf("\n\t\t\t\t\t\tSalir......................2");
		printf("\n\n\n\n\n\n\n\n");
		printf("-> "); cin >> option;
	}
	if (option == 1) {


		random rd;
		Dictionary pk;
		Tempo pi;
		checkword ck;
		option2 = 0;
		tries = 0;
		stgame = true;
		remove("discard.txt");

		while (stgame == true) {
			system("cls");
			points = 0;
			endgame = false;
			stgame = false;
			isRight = true;
			repFlag = false;
			while (lang > 2 || lang < 1) {
				printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t     %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 201, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 187);
				printf("\n\t\t\t\t\t     %c        Elija el idioma        %c", 186, 186);
				printf("\n\t\t\t\t\t     %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 204, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 185);
				printf("\n\t\t\t\t\t     %c Ingl%cs......................1 %c", 186, 130, 186);
				printf("\n\t\t\t\t\t     %c Espa%col.....................2 %c", 186, 164, 186);
				printf("\n\t\t\t\t\t     %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 200, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 188);
				printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
				printf("-> "); cin >> lang;
			}
			rd.a();
			pk.res(lang);

			while (endgame != true) {
				endgame = false;
				stgame = false;
				system("cls");
				HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
				if (isRight == false) {
					SetConsoleTextAttribute(hConsole, 4);
					printf("\t\t\t\t\t     La palabra digitada no es posible");
				}
				if (repFlag == true) {
					SetConsoleTextAttribute(hConsole, 4);
					printf("\t\t\t\t\t     La palabra digitada ya fue usada");
					repFlag = false;
				}
				if (shortFlag == true) {
					SetConsoleTextAttribute(hConsole, 4);
					printf("\t\t\t\t       Solo se admiten palabras de tres digitos o mas");
					shortFlag = false;
				}
				SetConsoleTextAttribute(hConsole, 14);
				printf("\n\n\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 201, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 187);
				printf("\n\t%c                                                                                                      %c", 186, 186);
				printf("\n\t%c         %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c                              %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c               %c", 186, 201, 205, 205, 205, 205, 205, 203, 205, 205, 205, 205, 205, 203, 205, 205, 205, 205, 205, 203, 205, 205, 205, 205, 205, 203, 205, 205, 205, 205, 205, 187, 201, 205, 205, 205, 205, 205, 205, 205, 205, 205, 203, 205, 205, 205, 205, 205, 187, 186);
				printf("\n\t%c         %c     %c     %c     %c     %c     %c                              %c Fallos: %c  %d ", 186, 186, 186, 186, 186, 186, 186, 186, 186, tries); printf(" %c               %c", 186, 186);
				printf("\n\t%c         %c  %c  %c  %c  %c  %c  %c  %c  %c  %c  %c                              %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c               %c", 186, 186, rd.strrnd[0], 186, rd.strrnd[1], 186, rd.strrnd[2], 186, rd.strrnd[3], 186, rd.strrnd[4], 186, 204, 205, 205, 205, 205, 205, 205, 205, 205, 205, 206, 205, 205, 205, 205, 205, 185, 186);
				if (points < 10) {
					printf("\n\t%c         %c     %c     %c     %c     %c     %c                              %c Puntos: %c  %d  %c               %c", 186, 186, 186, 186, 186, 186, 186, 186, 186, points, 186, 186);
				}
				if (points >= 10 && points < 100) {
					printf("\n\t%c         %c     %c     %c     %c     %c     %c                              %c Puntos: %c %d  %c               %c", 186, 186, 186, 186, 186, 186, 186, 186, 186, points, 186, 186);
				}
				if (points >= 100) {
					printf("\n\t%c         %c     %c     %c     %c     %c     %c                              %c Puntos: %c %d %c               %c", 186, 186, 186, 186, 186, 186, 186, 186, 186, points, 186, 186);
				}
				printf("\n\t%c         %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c                              %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c               %c", 186, 204, 205, 205, 205, 205, 205, 206, 205, 205, 205, 205, 205, 206, 205, 205, 205, 205, 205, 206, 205, 205, 205, 205, 205, 206, 205, 205, 205, 205, 205, 185, 200, 205, 205, 205, 205, 205, 205, 205, 205, 205, 202, 205, 205, 205, 205, 205, 188, 186);
				printf("\n\t%c         %c     %c     %c     %c     %c     %c                                                              %c", 186, 186, 186, 186, 186, 186, 186, 186);
				printf("\n\t%c         %c  %c  %c  %c  %c  %c  %c  %c  %c  %c  %c                                                              %c", 186, 186, rd.strrnd[5], 186, rd.strrnd[6], 186, rd.strrnd[7], 186, rd.strrnd[8], 186, rd.strrnd[9], 186, 186);
				printf("\n\t%c         %c     %c     %c     %c     %c     %c                                                              %c", 186, 186, 186, 186, 186, 186, 186, 186);
				printf("\n\t%c         %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c                                                              %c", 186, 204, 205, 205, 205, 205, 205, 206, 205, 205, 205, 205, 205, 206, 205, 205, 205, 205, 205, 206, 205, 205, 205, 205, 205, 206, 205, 205, 205, 205, 205, 185, 186);
				printf("\n\t%c         %c     %c     %c     %c     %c     %c                                                              %c", 186, 186, 186, 186, 186, 186, 186, 186);
				printf("\n\t%c         %c  %c  %c  %c  %c  %c  %c  %c  %c  %c  %c                             %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c              %c", 186, 186, rd.strrnd[10], 186, rd.strrnd[11], 186, rd.strrnd[12], 186, rd.strrnd[13], 186, rd.strrnd[14], 186, 201, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 203, 205, 205, 205, 205, 187, 186);
				printf("\n\t%c         %c     %c     %c     %c     %c     %c                             %c Tres       %c 1  %c              %c", 186, 186, 186, 186, 186, 186, 186, 186, 186, 186, 186);
				printf("\n\t%c         %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c                             %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c              %c", 186, 204, 205, 205, 205, 205, 205, 206, 205, 205, 205, 205, 205, 206, 205, 205, 205, 205, 205, 206, 205, 205, 205, 205, 205, 206, 205, 205, 205, 205, 205, 185, 204, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 206, 205, 205, 205, 205, 185, 186);
				printf("\n\t%c         %c     %c     %c     %c     %c     %c                             %c Cuatro     %c 1  %c              %c", 186, 186, 186, 186, 186, 186, 186, 186, 186, 186, 186);
				printf("\n\t%c         %c  %c  %c  %c  %c  %c  %c  %c  %c  %c  %c                             %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c              %c", 186, 186, rd.strrnd[15], 186, rd.strrnd[16], 186, rd.strrnd[17], 186, rd.strrnd[18], 186, rd.strrnd[19], 186, 204, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 206, 205, 205, 205, 205, 185, 186);
				printf("\n\t%c         %c     %c     %c     %c     %c     %c                             %c Cinco      %c 2  %c              %c", 186, 186, 186, 186, 186, 186, 186, 186, 186, 186, 186);
				printf("\n\t%c         %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c                             %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c              %c", 186, 204, 205, 205, 205, 205, 205, 206, 205, 205, 205, 205, 205, 206, 205, 205, 205, 205, 205, 206, 205, 205, 205, 205, 205, 206, 205, 205, 205, 205, 205, 185, 204, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 206, 205, 205, 205, 205, 185, 186);
				printf("\n\t%c         %c     %c     %c     %c     %c     %c                             %c Seis       %c 3  %c              %c", 186, 186, 186, 186, 186, 186, 186, 186, 186, 186, 186);
				printf("\n\t%c         %c  %c  %c  %c  %c  %c  %c  %c  %c  %c  %c                             %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c              %c", 186, 186, rd.strrnd[20], 186, rd.strrnd[21], 186, rd.strrnd[22], 186, rd.strrnd[23], 186, rd.strrnd[24], 186, 204, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 206, 205, 205, 205, 205, 185, 186);
				printf("\n\t%c         %c     %c     %c     %c     %c     %c                             %c Siete      %c 5  %c              %c", 186, 186, 186, 186, 186, 186, 186, 186, 186, 186, 186);
				printf("\n\t%c         %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c                             %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c              %c", 186, 200, 205, 205, 205, 205, 205, 202, 205, 205, 205, 205, 205, 202, 205, 205, 205, 205, 205, 202, 205, 205, 205, 205, 205, 202, 205, 205, 205, 205, 205, 188, 204, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 206, 205, 205, 205, 205, 185, 186);
				printf("\n\t%c                                                                     %c Ocho o mas %c 11 %c              %c", 186, 186, 186, 186, 186);
				printf("\n\t%c                                                                     %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c              %c", 186, 200, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 202, 205, 205, 205, 205, 188, 186);
				printf("\n\t%c                                                                                                      %c", 186, 186);
				printf("\n\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 200, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 188);
				printf("\n\t   -> ");
				cin >> respuesta;
				if (respuesta.size() < 3) {
					shortFlag = true;
				}else{

				ck.isDupe(respuesta);

				if (ck.GetRep() == true) {
					repFlag = true;
					isRight = true;
				}

				ck.CheckW(respuesta);

				if (ck.GetLenght() == 0) {
					isRight = false;
					tries = tries + 1 ;
				}
				else {
					if (repFlag == false) {
						points = points + ck.GetLenght();
						isRight = true;
					}
				}

				if (tries > 2) {
					endgame = true;
				}
				}
			}

			while (option2 < 1 || option2 > 2) {
				system("cls");
				printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t     %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 201, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 187);
				printf("\n\t\t\t\t\t     %c        Juego terminado        %c", 186, 186);
				printf("\n\t\t\t\t\t     %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 204, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 185);
				printf("\n\t\t\t\t\t     %c Volver a intentar...........1 %c", 186, 186);
				printf("\n\t\t\t\t\t     %c Salir del juego.............2 %c", 186, 186);
				printf("\n\t\t\t\t\t     %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 200, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 188);
				printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
				printf("-> "); cin >> option2;

				if (option2 == 1) {
					stgame = true;
					remove("discard.txt");
				}
				if (option2 == 2) {
					exit(0);
				}
			}
		}
	}

	if (option == 2) {
		exit(0);
	}
}
