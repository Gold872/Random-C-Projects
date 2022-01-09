#include <iostream>
#include <fstream>

int main() {

	char operators[] = {'+', '-', '/', '*'};

	std::ofstream file("code.txt");

	file << "print(\'Welcome to this calculator!\')\n";
	file << "print(\'It can add, subtract, multiply and divide whole numbers from 0 to 50\')\n";
	file << "num1 = int(input(\'Please choose your first number: \'))\n";
	file << "sign = input(\'What do you want to do? +, -, /, or *: \')\n";
	file << "num2 = int(input(\'Please choose your second number: \'))\n\n";

	for(int i = 0; i < 4; i++) {
		for(int j = 0; j <= 50; j++) {
			for(int k = 0; k <= 50; k++) {
				file << "if num1 == " << j << " and sign == \'" << operators[i] << "\' and num2 == " << k << ":\n";
				switch(i) {
				case 0:
					file << "\tprint(\"" << j << "+" << k << " = " << j+k << "\")\n";
					break;
				case 1:
					file << "\tprint(\"" << j << "-" << k << " = " << j-k << "\")\n";
					break;
				case 2:
					if(k != 0) {
						file << "\tprint(\"" << j << "/" << k << " = " << (double) j/k << "\")\n";
					} else {
						file << "\tprint(\"" << j << "/" << k << " = Inf\")\n";
					}
					break;
				case 3:
					file << "\tprint(\"" << j << "*" << k << " = " << j*k << "\")\n";
					break;
				}
			}
		}
	}
	file << "\nprint(\"Thanks for using this calculator, goodbye :)\")";
	file.close();
}
