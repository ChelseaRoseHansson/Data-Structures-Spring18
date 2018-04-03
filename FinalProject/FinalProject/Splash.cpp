#include <iostream>
#include <windows.h>                  // For gotoxy() and Sleep function
#include "Utilities.h"
#include <string>

using namespace std;


void splashScreen()
{
	system("CLS");
	system("Color 2B");


	//http://www.kammerl.de/ascii/AsciiSignature.php
	string art = "";
	art += "::::    ::::  :::   :::\n";
	art += "+:+:+: :+:+:+ :+:   :+:\n";
	art += "+:+ +:+:+ +:+  +:+ +:+ \n";
	art += "+#+  +:+  +#+   +#++:  \n";
	art += "+#+       +#+    +#+   \n";
	art += "#+#       #+#    #+#   \n";
	art += "###       ###    ###   \n";
	cout << art;

	gotoxy(50, 9);
	cout <<"    dMMMMb  dMMMMb  .aMMMb dMMMMMP dMMMMMP .aMMMb dMMMMMMP\n";
	gotoxy(50, 10);
	cout << "   dMP.dMP dMP.dMP dMP\"dMP    dMP dMP     dMP\"VMP   dMP   \n";
	gotoxy(50, 11);
	cout << "  dMMMMP\" dMMMMK\" dMP dMP    dMP dMMMP   dMP       dMP    \n";
	gotoxy(50, 12);
	cout << " dMP     dMP\"AMF dMP.aMPdK.dMP dMP     dMP.aMP   dMP     \n";
	gotoxy(50, 13);
	cout << "dMP     dMP dMP  VMMMP\" VMMMP\" dMMMMMP  VMMMP\"   dMP      \n";

	cin.get();

	system("PAUSE");

}