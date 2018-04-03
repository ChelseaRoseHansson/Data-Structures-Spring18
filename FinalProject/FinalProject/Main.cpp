#include "menu.h"
#include "splash.h"
#include "FileUtilities.h"

using namespace std;

int main()
{
	system("mode 150");
	system("Color 1A");
	system("cls");

	//http://www.kammerl.de/ascii/AsciiSignature.php
	string art = "";
	art += "   _  _  _  _                                      _                \n";
	art += " _(_)(_)(_)(_)_                                   (_)               \n";
	art += "(_)          (_)   _  _  _        _  _   _  _   _  _   _       _  _ \n";
	art += "(_)_  _  _  _     (_)(_)(_) _    (_)(_)_(_)(_) (_)(_) (_)_  _ (_)(_)\n";
	art += "  (_)(_)(_)(_)_    _  _  _ (_)  (_)   (_)   (_)   (_)   (_)(_)      \n";
	art += " _           (_) _(_)(_)(_)(_)  (_)   (_)   (_)   (_)   (_)         \n";
	art += "(_)_  _  _  _(_)(_)_  _  _ (_)_ (_)   (_)   (_) _ (_) _ (_)         \n";
	art += "  (_)(_)(_)(_)    (_)(_)(_)  (_)(_)   (_)   (_)(_)(_)(_)(_)         \n";

	cout << art;
	cin.get();
	splashScreen();
	mainMenu();

	return 0;
}
