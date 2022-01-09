#include <iostream>
#include <string>

void expandText(std::string input) {
	std::string newString = "";
	for(int i = 0; i < input.length(); i++) {
		char c = input.at(i);
		newString += c;
		if(c != ' ') {
			std::cout << newString << "\n";
		}
	}
	for(int i = newString.length() - 1; i > 0; i--) {
		newString.pop_back();
		char c = newString.at(i - 1);
		if(c != ' ') {
			std::cout << newString + "\n";
		}
	}
}

int main() {

	std::cout << "Type in the text you would like to expand: ";
	std::string inputString;
	getline(std::cin, inputString);

	expandText(inputString);

	return 0;
}
