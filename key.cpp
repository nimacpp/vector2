#include <iostream>
#include <string.h>
#include "lib/enc.h"
#include "lib/dec.h"
#include "lib/banner.h"

#if defined(__linux__) // any linux distribution
#define CLS "clear"
#elif defined(_WIN32) // any windows system
#define CLS "cls"
#else
#define CLS "clear"
#endif

using namespace std;

int main() {
	system(CLS);
	int i, input;
	string str;
	cout<<banner<<
	    "\e[33m [!] Please choose following options:          \n\n"
	    "\e[36m [1] Encrypt string.                           \n\n"
	    " [2] Decrypt string.                                 \n\n"
	    " [3] Encrypt File.                                   \n\n"
	    " [4] Decrypt File.                                   \n\n"
	    " [5] Exit                                   \e[0m\n\n"
	    <<ask("MENU");
fr:
	cin >> input;
	switch(input) {

		case 1:
			system(CLS);
			cout<<banner<<
			    "\e[33m [!] Please Enter String:             \n\n"
			    <<ask("Encrypt STR");
			getline(cin  >> ws,str);
			for(i = 0; (i < 100 && str[i] != '\0'); i++)
				str[i] = str[i] + 2;

			cout << "\e[31m\n[+] Encrypted string: \e[0m" << str << endl;
			break;

		case 2:
			system(CLS);
			cout<<banner<<
			    "\e[33m [!] Please Enter String:            \n\n"
			    <<ask("Decrypt STR");
			getline(cin >> ws ,str);
			for(i = 0; (i < 100 && str[i] != '\0'); i++)
				str[i] = str[i] - 2;

			cout << "\e[31m\nDecrypted string: \e[0m" << str << endl;
			break;
		case 3:
			system(CLS);
			cout<<banner<<
			    "\e[33m [!] Please Enter Dir File:                \n\n"
			    <<ask("Encrypt File ("+pwd()+")");

			vector1 one;
			one.center();
			break;
		case 4:
			system(CLS);
			cout<<banner<<
			    "\e[33m [!] Please Enter Dir File:              \n\n"
			    <<ask("Decrypt File ("+pwd()+")");
			vector2 two;
			two.center2();
			break;
		case 5:
			exit(0);
		default:
			cout << "\e[32m[-] Invalid Input !!! \e[0m\n";
			goto fr;
			break;
	}
	return 0;
}
