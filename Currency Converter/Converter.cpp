#include <iostream>
#include <stdio.h>
#include <string>

float convertFromUSD(float &amount, std::string &convertTo);
float convertFromEUR(float &amount, std::string &convertTo);
float convertFromCAD(float &amount, std::string &convertTo);

float convert(float amount, float cFactor) {
	return amount * cFactor;
}

int main() {

	float amount;
	float result;
	std::string convertFrom;
	std::string convertTo;

	std::cout << "Enter the currency you want to convert from (USD, EUR, or CAD): ";
	std::cin >> convertFrom;

	std::cout << "Enter the currency you want to convert to (USD, EUR, or CAD): ";
	std::cin >> convertTo;

	std::cout << "Enter the Amount: ";
	std::cin >> amount;

	if(convertFrom == "USD") {
		result = convertFromUSD(amount, convertTo);
	} else if(convertFrom == "EUR") {
		result = convertFromEUR(amount, convertTo);
	} else if(convertFrom == "CAD") {
		result = convertFromEUR(amount, convertTo);
	}

	std::cout << amount << " " << convertFrom << " is " << result << " " << convertTo;

	return 0;
}

float convertFromUSD(float &amount, std::string &convertTo) {
	if(convertTo == "EUR") {
		return convert(amount, 0.88);
	} else if(convertTo == "CAD") {
		return convert(amount, 1.26);
	} else {
		return convert(amount, 1.00);
	}
}

float convertFromEUR(float &amount, std::string &convertTo) {
	if(convertTo == "USD") {
		return convert(amount, 1.14);
	} else if(convertTo == "CAD") {
		return convert(amount, 1.43);
	} else {
		return convert(amount, 1.00);
	}
}

float convertFromCAD(float &amount, std::string &convertTo) {

	if(convertTo == "USD") {
		return convert(amount, 0.79);
	} else if(convertTo == "EUR") {
		return convert(amount, 0.70);
	} else {
		return convert(amount, 1.00);
	}
}
