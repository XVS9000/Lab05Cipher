//class inclusions
#include <iostream>
#include <vector>
#include <string>


//namespace
using namespace std;

//main cipher program
char charChecker(char letter) {
	//cipher alphabet
	vector<char> cipher{
		'V', 'F', 'X', 'B', 'L', 'I', 'T', 'Z', 'J', 'R', 'P', 'H', 'D', 'K', 'N', 'O', 'W', 'S', 'G', 'U', 'Y', 'Q', 'M', 'A', 'C', 'E'
	};

	//letter conversion conditionals
	// first checks to see if it's lowercase. calculates the index in the cipher alphabet by subtracting base-65 from the current char value. then outputs the letter in the cipher
	if (letter >=  65 && letter <= 90) {
		letter = cipher[letter - 65];
		return letter;
	}
	//determinent if it's uppercase. acquires lowercase letter by subtracting 32 from current character. then converts it to the cipher via the same process above.
	else if (letter >= 97 && letter <= 122) {
		letter -= 32;
		letter = cipher[letter - 65];
		return letter + 32;
	}
	//determinent if it's not a letter
	else{
		return letter;
	}
}

//terminal input/output prompt
string cipherPrompt() {
	string text;
	cout << ("input some text into the Caeser-cipher: ");
	getline(cin, text);
	return text;
}

//caeser cipher output after conversions
void caeser_cipher() {
	string userInp = cipherPrompt();
	cout << ("\nyour text has been encrypted and assimilated into a delicious caeser salad! this is what it says.....\n '");

	//printing each converted character of the inputted string
	for (int i = 0; i < userInp.size(); i++){
		cout << charChecker(userInp[i]);
	}
	cout << "'\n";
}

//main class
int main() {
	caeser_cipher();
	return 0;
}