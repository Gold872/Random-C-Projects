#include <iostream>
#include <stdlib.h>
#include <time.h>

//char uppercaseLetters[] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',
//		'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X',
//		'Y', 'Z' };
//char lowercaseLetters[] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
//		'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x',
//		'y', 'z' };
char uppercaseLetters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
char lowercaseLetters[] = "abcdefghijklmnopqrstuvwxyz";
char otherUnicodeSymbols[] = "~!@#$%^&*()-_+=,.<>[]{}:;'?/";
char numbers[] = "0123456789";

char *newPassword;
int listSelect;
int randCharIndex;
char newChar;

void assignMaxComplexPassword(int length) {
	srand(time(NULL));
	newPassword = new char[length];
	for(int i = 0; i < length; i++) {
		listSelect = rand() % 4;
		switch(listSelect) {
		case 0:
			randCharIndex = rand() % (*(&uppercaseLetters + 1) - uppercaseLetters - 2);
			newChar = uppercaseLetters[randCharIndex];
			newPassword[i] = newChar;
			break;
		case 1:
			randCharIndex = rand() % (*(&lowercaseLetters + 1) - lowercaseLetters - 2);
			newChar = lowercaseLetters[randCharIndex];
			newPassword[i] = newChar;
			break;
		case 2:
			randCharIndex = rand() % (*(&numbers + 1) - numbers - 2);
			newChar = numbers[randCharIndex];
			newPassword[i] = newChar;
			break;
		case 3:
			randCharIndex = rand() % (*(&otherUnicodeSymbols + 1) - otherUnicodeSymbols - 2);
			newChar = otherUnicodeSymbols[randCharIndex];
			newPassword[i] = newChar;
			break;
		default:
			break;
		}
	}
}

void assignMedComplexPassword(int length) {
	srand(time(NULL));
	newPassword = new char[length];
	for(int i = 0; i < length; i++) {
		listSelect = rand() % 3;
		switch(listSelect) {
		case 0:
			randCharIndex = rand() % (*(&uppercaseLetters + 1) - uppercaseLetters - 2);
			newChar = uppercaseLetters[randCharIndex];
			newPassword[i] = newChar;
			break;
		case 1:
			randCharIndex = rand() % (*(&lowercaseLetters + 1) - lowercaseLetters - 2);
			newChar = lowercaseLetters[randCharIndex];
			newPassword[i] = newChar;
			break;
		case 2:
			randCharIndex = rand() % (*(&numbers + 1) - numbers - 2);
			newChar = numbers[randCharIndex];
			newPassword[i] = newChar;
			break;
		default:
			break;
		}
	}
}

void assignLowComplexPassword(int length) {
	srand(time(NULL));
	newPassword = new char[length];
	for(int i = 0; i < length; i++) {
		listSelect = rand() % 2;
		switch(listSelect) {
		case 0:
			randCharIndex = rand() % (*(&uppercaseLetters + 1) - uppercaseLetters - 2);
			newChar = uppercaseLetters[randCharIndex];
			newPassword[i] = newChar;
			break;
		case 1:
			randCharIndex = rand() % (*(&lowercaseLetters + 1) - lowercaseLetters - 2);
			newChar = lowercaseLetters[randCharIndex];
			newPassword[i] = newChar;
			break;
		default:
			break;
		}
	}
}

int main() {
	int length = 0;
	int complexity = 1;
	std::cout << "Enter the Length of Brian's Password: ";
	std::cin >> length;
	std::cout << "\nEnter the Complexity of Brian's Password (1, 2, or 3): ";
	std::cin >> complexity;
	switch(complexity) {
	case 1:
		assignLowComplexPassword(length);
		break;
	case 2:
		assignMedComplexPassword(length);
		break;
	case 3:
		assignMaxComplexPassword(length);
		break;
	}
	std::cout << "\nBrian's new password is: \n" << newPassword;

	return 0;
}
