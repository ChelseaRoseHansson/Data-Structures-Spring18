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
	art += "            (                       \n";
	art += "   (    (   )\\ )       )     )   )  \n";
	art += " ( )\\   )\\ (()/(    ( /(  ( /(( /(  \n";
	art += " )((_)(((_) /(_))   )\\()) )\\())\\()) \n";
	art += "((_)_ )\\___(_))    ((_)\\ ((_)((_)\\  \n";
	art += " | _ ((/ __/ __|  |__ (_|__  /  (_) \n";
	art += " | _ \\| (__\\__ \\   |_ \\   / | () |  \n";
	art += " |___/ \\___|___/  |___/  /_/ \\__/   \n";
	art += "\n";
	art += " ,ggg,        gg                                                 ,ggg,        gg                \n";
	art += "dP\"\"Y8b       dP                                                dP\"\"Y8b       88                \n";
	art += "Yb, `88      d8'                                                Yb, `88       88                \n";
	art += " `\"  88,    dP'                           gg                     `\"  88       88                \n";
	art += "     88aaad8\"                             \"\"                         88aaaaaaa88                \n";
	art += "     88\"\"\"\"Yb,     ,ggg,      ggg    gg   gg    ,ggg,,ggg,           88\"\"\"\"\"\"\"88 gg      gg     \n";
	art += "     88     \"8b   i8\" \"8i    d8\"Yb   88bg 88   ,8\" \"8P\" \"8,          88       88 I8      8I     \n";
	art += "     88      `8i  I8, ,8I   dP  I8   8I   88   I8   8I   8I          88       88 I8,    ,8I     \n";
	art += "     88       Yb, `YbadP' ,dP   I8, ,8I _,88,_,dP   8I   Yb,         88       Y8,d8b,  ,d8b,    \n";
	art += "     88        Y8888P\"Y8888\"     \"Y8P\"  8P\"\"Y88P'   8I   `Y8         88       `Y8P'\"Y88P\"`Y8    \n";
	art += "\n";
	art += "  _____ _          _                  _    _ 	\n";
	art += " / ____| |        | |                | |  | |    	\n";
	art += " | |   | |__   ___| |___  ___  __ _  | |__| | __ _ _ __  ___ ___  ___  _ __  	\n ";
	art += "| |   | '_ \\ / _ \\ / __|/ _ \\/ _` | |  __  |/ _` | '_ \\/ __/ __|/ _ \\| '_ \\ 	\n";
	art += " | |___| | | |  __/ \\__ \\  __/ (_| | | |  | | (_| | | | \\__ \\__ \\ (_) | | | |	\n";
	art += " \\_____|_| |_|\\___|_|___/\\___|\\__,_| |_|  |_|\\__,_|_| |_|___/___/\\___/|_| |_|	\n";

	cout << art;
	cin.get();
	splashScreen();
	mainMenu();

	return 0;
}